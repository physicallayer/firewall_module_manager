#include "widget.h"
#include <QApplication>

// RULE
// [interface] [protocol(TCP|UDP)] [src_ip] [src_port] [dst_ip] [dst_port] [ACCEPT|DROP]
// /etc/firewall/in.rule
// /etc/firewall/out.rule
// /etc/firewall/pass.log

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
