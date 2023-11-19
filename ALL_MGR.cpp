// ALL_MGR.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "PatientBuilder.h"
#include <vector>
#include <map>
#include <array>
#include "Rutine.h"
int main()
{
    std::cout << "Hello World!\n";

    PatientBuilder P1;
    auto B1 = P1.setName("Janek").setAge(17).build();

    std::string c1 = B1->getName();
    std::cout << "Patient's name is: " << c1 << '\n';
    std::array<std::unique_ptr<Patient>, 5> Arr{};

    for (auto& Patients : Arr)
    {
       PatientBuilder C1;
        std::cout << "Podaj Imie";
       std::string c;
        std::cin >> c;
         Patients = C1.setName(c).setAge(19).build();

    }
   int b= Arr.at(2)->getAge();
   std::cout << b;
   Rutine R1{};
  
  
}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
