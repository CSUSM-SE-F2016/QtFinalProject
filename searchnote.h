#ifndef SEARCHNOTE_H
#define SEARCHNOTE_H

#include "profile.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <search.h>
#include <QMenu>

#include <QDialog>

namespace Ui {
class SearchNote;
}

class SearchNote : public QDialog
{
    Q_OBJECT

public:
    explicit SearchNote(QWidget *parent = 0);
    ~SearchNote();

private slots:
    void on_searchButton_clicked();

    void on_addNoteYes_clicked();

private:
    Ui::SearchNote *ui;
};

#endif // SEARCHNOTE_H
