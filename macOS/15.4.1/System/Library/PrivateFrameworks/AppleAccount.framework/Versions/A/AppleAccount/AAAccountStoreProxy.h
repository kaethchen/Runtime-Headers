@class NSString;

@interface AAAccountStoreProxy : NSObject <AAAccountStoreProxyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isAccountDaemonConnectionError:(id)a0;

- (void)saveAccount:(id)a0 onAccountStore:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)saveAccount:(id)a0 onAccountStore:(id)a1 withDataclassActions:(id)a2 doVerify:(BOOL)a3 completion:(id /* block */)a4;

@end
