@interface AMAddressBookSoftLinking : NSObject

+ (void *)framework;
+ (Class)ABGroup;
+ (Class)ABAddressBook;
+ (id)kABURLsProperty;
+ (Class)ABSearchElement;
+ (Class)ABPerson;
+ (id)kABNoteProperty;
+ (id)kABAddressCityKey;
+ (id)kABAddressProperty;
+ (id)kABAddressStateKey;
+ (id)kABAddressZIPKey;
+ (id)kABAnniversaryLabel;
+ (id)kABBirthdayProperty;
+ (id)kABCreationDateProperty;
+ (id)kABDepartmentProperty;
+ (id)kABEmailHomeLabel;
+ (id)kABEmailProperty;
+ (id)kABFirstNamePhoneticProperty;
+ (id)kABFirstNameProperty;
+ (id)kABGroupNameProperty;
+ (id)kABHomePageLabel;
+ (id)kABHomePageProperty;
+ (id)kABInstantMessageProperty;
+ (id)kABInstantMessageUsernameKey;
+ (id)kABLastNamePhoneticProperty;
+ (id)kABLastNameProperty;
+ (id)kABMiddleNamePhoneticProperty;
+ (id)kABMiddleNameProperty;
+ (id)kABModificationDateProperty;
+ (id)kABOrganizationProperty;
+ (id)kABOtherDatesProperty;
+ (id)kABPhoneHomeLabel;
+ (id)kABPhoneProperty;
+ (void)softLink;

@end
