@class ABAccount, NSArray, CNLazyArray, ABAddressBook;

@interface ABFindsUserDataInAddressBook : NSObject {
    ABAddressBook *_addressBook;
    ABAccount *_account;
    NSArray *_people;
    ABAddressBook *_addressBookForSeededCards;
    CNLazyArray *_seedCards;
}

@property (readonly) BOOL hasUserData;

- (void).cxx_destruct;
- (id)people;
- (BOOL)_hasMeCard;
- (BOOL)_hasSeededMarketingCard;
- (BOOL)_hasUserGroups;
- (BOOL)_hasUserPeople;
- (id)initWithAddressBook:(id)a0 account:(id)a1;
- (id)seedCards;
- (void)setUpSeedCards;

@end
