#include <iostream>
#include <xlnt/xlnt.hpp>

int main()
{
    int n=0;
    int m=0;
    int l=0;
    
    std::clog << "Lectura archivo Cursos" << std::endl;
    xlnt::workbook wb;
    wb.load("/home/ignacio/NetBeansProjects/excel/Cursos.xlsx");
   auto ws = wb.active_sheet();
   
    for (auto column : ws.columns(false)) 
    { 
        for (auto cell : column) 
    { 
       n++;
    }
    }
    std::clog << "El largo total del archivo es: " << (n/6)-1 << std::endl;
    
    std::clog << "---------------------------------------" << (m/10)-1 << std::endl;
    std::clog << "Lectura archivo Docentes "<< std::endl;
    xlnt::workbook xb;
    xb.load("/home/ignacio/NetBeansProjects/excel/Docentes.xlsx");
   auto xs = xb.active_sheet();
   
    for (auto column : xs.columns(false)) 
    { 
        for (auto cell : column) 
    { 
        
        m++;
    }
    }
    std::clog << "El largo total del archivo es: " << (m/10)-1 << std::endl;
    
    std::clog << "---------------------------------------" << std::endl;
    std::clog << "Lectura archivo Salas "<< std::endl;
    xlnt::workbook yb;
    yb.load("/home/ignacio/NetBeansProjects/excel/Salas.xlsx");
   auto ys = yb.active_sheet();
   
    for (auto column : ys.columns(false)) 
    { 
        for (auto cell : column) 
    { 
        
        l++;
    }
    }
    std::clog << "El largo total del archivo es: " << (l/2)-1 << std::endl;
    
    return 0;
}