#include "WidgetStackManager.h"

QStack<QWidget*> WidgetStackManager::winStack;

void WidgetStackManager::openNew(QWidget* newWid){
    winStack.push_back(newWid);
    winStack.top()->show();
}

void WidgetStackManager::eraseTop(){
    winStack.pop();
}
