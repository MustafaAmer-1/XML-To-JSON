#ifndef XML_EDITOR_H
#define XML_EDITOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class XML_Editor; }
QT_END_NAMESPACE

class XML_Editor : public QMainWindow
{
    Q_OBJECT

public:
    XML_Editor(QWidget *parent = nullptr);
    ~XML_Editor();

private slots:
    void on_actionOpen_triggered();

private:
    Ui::XML_Editor *ui;

    void actionButtons(bool b);
};
#endif // XML_EDITOR_H