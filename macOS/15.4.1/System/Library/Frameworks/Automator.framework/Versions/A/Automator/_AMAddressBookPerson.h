@class NSString, NSDate;

@interface _AMAddressBookPerson : _AMAddressBookEntry

@property (copy) NSString *nickname;
@property (copy) NSString *organization;
@property (copy) NSString *maidenName;
@property (copy) NSString *suffix;
@property (readonly, copy) NSString *vcard;
@property (copy) NSString *homePage;
@property (copy) NSDate *birthDate;
@property (copy) NSString *phoneticLastName;
@property (copy) NSString *title;
@property (copy) NSString *phoneticMiddleName;
@property (copy) NSString *department;
@property (copy) NSString *image;
@property (readonly, copy) NSString *name;
@property (copy) NSString *note;
@property BOOL company;
@property (copy) NSString *middleName;
@property (copy) NSString *phoneticFirstName;
@property (copy) NSString *jobTitle;
@property (copy) NSString *lastName;
@property (copy) NSString *firstName;

- (id)groups;
- (id)addresses;
- (id)urls;
- (id)emails;
- (id)relatedNames;
- (id)phones;
- (id)AIMHandles;
- (id)ICQHandles;
- (id)JabberHandles;
- (id)MSNHandles;
- (id)YahooHandles;
- (id)customDates;

@end
