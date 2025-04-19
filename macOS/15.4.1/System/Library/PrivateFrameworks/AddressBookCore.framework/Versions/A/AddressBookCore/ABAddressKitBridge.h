@interface ABAddressKitBridge : NSObject

+ (id)abValueFromCNContact:(id)a0 forAddressBookProperty:(id)a1;
+ (id)abValueFromCNContact:(id)a0 forCNProperty:(id)a1;
+ (id)fetchCNContactsForABPeople:(id)a0 unify:(BOOL)a1;
+ (id)fetchContactsForIdentifiers:(id)a0 unify:(BOOL)a1 withLegacyAddressBook:(id)a2;

@end
