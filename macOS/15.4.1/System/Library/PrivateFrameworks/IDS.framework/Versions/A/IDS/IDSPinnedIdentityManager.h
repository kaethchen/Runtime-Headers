@interface IDSPinnedIdentityManager : NSObject

- (void)pinIdentityBlob:(id)a0 withCompletion:(id /* block */)a1;
- (void)clearAllPinnedIdentities;
- (void)fetchAllPinnedIdentitiesWithCompletion:(id /* block */)a0;
- (void)fetchIdentityForPinningWithCompletion:(id /* block */)a0;

@end
