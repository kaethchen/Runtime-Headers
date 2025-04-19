@class NSArray;

@interface MFAccountProvider : NSObject <EDAccountsProvider>

@property (readonly, copy, nonatomic) NSArray *receivingAddresses;
@property (readonly, nonatomic) BOOL hasActiveAccounts;
@property (readonly, nonatomic) unsigned long long numberOfActiveAccounts;

- (id)mailAccounts;

@end
