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
