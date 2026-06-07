#include <string>

class Report {
public:
    std::string generateReport() {
        return "Report data";
    }
};

class ReportSaver {
public:
    void saveToFile(const Report& report, std::string filename) {
    }
};

int main() {
    Report myReport;
    myReport.generateReport();

    ReportSaver saver;
    saver.saveToFile(myReport, "report.txt");

    return 0;
}
//У початковому прикладі клас Report мав дві причини для зміни: зміна логіки створення звіту та зміна способу його збереження. Згідно з SRP, клас повинен мати лише одну відповідальність. Тому ми розділяємо цей клас на два: один формує звіт, а інший — відповідає за його збереження.