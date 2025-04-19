@interface CNContactNameOrderImpl : NSObject

+ (id)defaultSortOrder;
+ (id)defaultNewContactOrder;
+ (id)defaultOrder;
+ (id)familyNameFirstOrder;
+ (id)givenNameFirstOrder;
+ (id)orderForSortOrder:(long long)a0;

- (long long)nameOrder;
- (id)nameProperties;
- (id)phoneticNameProperties;
- (id)sortingNameProperties;

@end
