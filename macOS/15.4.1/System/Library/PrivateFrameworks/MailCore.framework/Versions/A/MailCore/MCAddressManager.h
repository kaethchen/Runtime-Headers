@class NSObject;
@protocol OS_os_log;

@interface MCAddressManager : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *previousRecipientsLog;

+ (id)_addressBookRecordsForFirstName:(id)a0 lastName:(id)a1;
+ (id)groupsMatchingString:(id)a0;
+ (id)addAddressToAddressBook:(id)a0;
+ (id)addEmailAddressToCardMatchingFirstAndLastNameFromFormattedAddress:(id)a0;
+ (void)_addEmailsFromGroup:(id)a0 toDictionary:(id)a1;
+ (id)expandGroups:(id)a0;
+ (id)replaceGroupsWithUndisclosedRecipients:(id)a0;

@end
