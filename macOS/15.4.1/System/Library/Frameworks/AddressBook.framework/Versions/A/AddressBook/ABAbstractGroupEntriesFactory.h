@class NSArray, NSString, ABAddressBook;

@interface ABAbstractGroupEntriesFactory : NSObject <ABGroupEntriesFactory>

@property (retain) NSArray *accounts;
@property (retain) ABAddressBook *addressBook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)sortAccounts:(id)a0;
- (id)makeGroupEntries;
- (id)makeGroupEntriesWithHidingPolicy:(id)a0;
- (void)setAccounts:(id)a0 withAddressBook:(id)a1;

@end
