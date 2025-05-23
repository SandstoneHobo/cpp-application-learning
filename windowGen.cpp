#include "windowGen.h"
#include <iostream>

MainWindow::MainWindow():m_button("Hello World"){
    set_title("Test App");

    set_default_size(200, 200);
    
    m_button.set_margin(10);

    m_button.signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_button_clicked));

    set_child(m_button);
}


MainWindow::~MainWindow(){

}

void MainWindow::on_button_clicked(){
    std::cout << "Hello World" << std::endl;
}
