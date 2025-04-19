@interface TCPAddressManager : NSObject

+ (id)_addressBookRecordsForFirstName:(id)a0 lastName:(id)a1;
+ (id)groupsMatchingString:(id)a0;
+ (id)addAddressToAddressBook:(id)a0;
+ (id)addEmailAddressToCardMatchingFirstAndLastNameFromFormattedAddress:(id)a0;
+ (void)_addEmailsFromGroup:(id)a0 toDictionary:(id)a1;
+ (id)expandGroups:(id)a0;
+ (id)emailAddressesFromGroup:(id)a0;

@end
