@class NSArray, NSString;

@interface ABPersistentStackDescription : NSObject <CNAccountsPersistentStackDescription> {
    NSArray *_accounts;
    BOOL _areStoresReadOnly;
}

@property (readonly) NSArray *stores;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAccountCollection:(id)a0 areStoresReadOnly:(BOOL)a1;
- (id)initWithAccounts:(id)a0 areStoresReadOnly:(BOOL)a1;

@end
