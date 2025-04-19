@interface CNAutocompleteGroupResultNamer : NSObject

+ (id)appendRemainingNames:(id)a0 toList:(id)a1;
+ (id)displayStringForName:(id)a0;
+ (id)displayStringForResult:(id)a0 withAddress:(id)a1 queryString:(id)a2;
+ (id)displayStringForResult:(id)a0 withAddress:(id)a1 queryString:(id)a2 itemLimit:(long long)a3;
+ (id)displayStringWithNames:(id)a0 limit:(long long)a1;
+ (unsigned long long)numberOfExpandedNames:(id)a0 limit:(long long)a1;
+ (id)sortedMembersForResult:(id)a0 queryString:(id)a1;
+ (id)sortedNamesForResult:(id)a0 queryString:(id)a1;

@end
