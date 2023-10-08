#include "headers/createprojectdialog.hpp"
#include "ui_createprojectdialog.h"

CreateProjectDialog::CreateProjectDialog(QWidget *parent) : QDialog(parent), ui(new Ui::CreateProjectDialog)
{
    ui->setupUi(this);
}

CreateProjectDialog::~CreateProjectDialog()
{
    delete ui;
}
