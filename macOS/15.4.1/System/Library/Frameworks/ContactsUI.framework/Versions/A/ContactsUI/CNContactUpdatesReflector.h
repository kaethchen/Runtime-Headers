@interface CNContactUpdatesReflector : NSObject

+ (id)contactFromCoreDataContact:(id)a0 withKeys:(id)a1;
+ (void)reflectUpdatesMadeToContacts:(id)a0 onPersonsInAddressBook:(id)a1;

@end
