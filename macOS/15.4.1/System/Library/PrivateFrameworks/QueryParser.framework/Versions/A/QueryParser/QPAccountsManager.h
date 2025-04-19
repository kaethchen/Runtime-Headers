@class CNContactStoreConfiguration, NSArray, NSDictionary;

@interface QPAccountsManager : NSObject

@property (retain, nonatomic) CNContactStoreConfiguration *contactsConfiguration;
@property (retain, nonatomic) NSArray *accountTypes;
@property (retain) NSArray *contentsArray;
@property (retain) NSDictionary *meCard;

+ (id)sharedAccountsManager;

- (void).cxx_destruct;
- (void)update:(id)a0;
- (id)getMeCard;
- (id)nameToEmailAddresses;

@end
