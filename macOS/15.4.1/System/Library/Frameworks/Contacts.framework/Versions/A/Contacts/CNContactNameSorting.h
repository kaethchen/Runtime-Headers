@interface CNContactNameSorting : NSObject

+ (id /* block */)defaultNameComparator;
+ (id /* block */)familyNameFirstComparator;
+ (id /* block */)givenNameFirstComparator;
+ (BOOL)shouldSortByGivenName;

@end
