#ifndef REQUESTHANDLER_H
#define REQUESTHANDLER_H

#include <string>

#include <QObject>
#include <QTcpSocket>


class RequestHandler : public QObject
{
    Q_OBJECT
public:
    explicit RequestHandler(QObject *parent = 0);
    ~RequestHandler();
    void Login(std::string username);
    void AddBook(std::string, double, std::string, double, double, std::string);
    void AddCoruse(std::string,std::string,std::string,double,std::string);
    void BuyBook(std::string, std::string);

private slots:
    void socketChanged(QAbstractSocket::SocketState state);

signals:
    void login(int result);
    void addbook(int result);
    void buybook(int result);
    void addcourse(int result);
    void connection(int status);

private:
    QTcpSocket *socket;

    void init();
    void kill();
};

#endif // REQUESTHANDLER_H
