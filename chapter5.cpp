#include "std_lib_facilities.h"

int main()
try {
	cout << "Success!\n";
	keep_window_open();
	return 0;
}
catch (exception& e){
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "Oops: unkown exception!\n";
	keep_window_open();
	return 2;
}

/* 1.feladat: a "Cout"-ot változónak veszi. Csak kis betűvel fog működni. cout<<"Succes!\n";

	2.feladat: hiányzik a " jel a végéről.
	
	3.feladat: hiányzik a ; a végéről, illetve nem kell << a \n és a "Success" közé és nem kell a Success végére a " jel
	
	4.feladat: a success -t egy váltorónak veszi, ha betesszük " " köze akkor működik.
	
	5.feladat: a vector int-tel deklaráltuk ezért nem lehet az eleme egy string típusú változó, még akkor sem ha szám.
	
	6.feladat: a vector 5-dik elemét []-el jelöljük nem ()-el és az if akkor teljesül ha egyenlő nem pedig nem egyenlő.
	
	7.feladat: a "cond" nincs deklarálva. Miután deklaráltuk egy bool változóként és igaz értéket adunk neki a program működni fog.
	
	8.feladat: ugyanaz mint a 7.feladatnál többé kevésbé. csak igazzá kell tennünk a 'c'-t.
	
	9.feladat: boo -t átírni bool-ra. és a relációs jelet megcserélni, mert mivel több betűs a szó ezért nagyobb érték a "fool".
	
	10.feladat: vagy s-et változtatjuk meg "fool"-ra vagy az if feltételt írjuk át "ape"-re.
	
	11.feladat: ugyan az mint a 10.feladatba, csak hiányzik a '<' a cout-ból.
	
	12.feladat: ugyan az mint a 11.feladatba, csak a '+' miatt nem feltétel ami az if-ban van.
	
	13.feladat: a for ciklusban a 0-t lecseréljük i-re mert azt tudom léptetni.
	
	14.feladat: hát ez működik.
	
	15.feladat: a for ciklusban tettem egy =-et a 6 mellé és a hatot átírtam 8-ra, hogy az egészet kiírja.
	
	16.feladat: a "then" nem kell.
	
	17.feladat: char típusú változóba nem lehet int típusú változót tenni, ezért kicseréljük int-re.
	
	18.feladat: elég 9-ig vinni az i-t.
	
	19.feladat: a vector-nak kell egy <int> típust adni.
	
	20.feladat: ++j helyett ++i-t kéne használni mert nem jutunk sehova.
	
	21.feladat: amikor d-t megadjuk akkor a /-t lecserélem '-'-ra és nem 2-t veszek el x-ből hanem 1.5-öt.
	
	22.feladat: a stringnek nem kell a <char>.
	
	23.feladat: deklaráljuk j-t és adjunk neki egy értéket ami kisebb mint 10.
	
	24.feladat: az if-ben kettő egyenlőség van mert egyenlőséget vizsgálunk és x típusát megváltoztatjuk double-re.
	
	25.feladat: cin-t lecseréljük cout-ra.
	*/
