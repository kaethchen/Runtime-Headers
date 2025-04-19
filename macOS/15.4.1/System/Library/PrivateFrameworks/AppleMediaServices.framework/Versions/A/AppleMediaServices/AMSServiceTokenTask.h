@class NSString, ACAccount, ACAccountStore;

@interface AMSServiceTokenTask : AMSTask

@property (retain) Class authKitUpdateTaskClass;
@property (readonly) ACAccount *account;
@property (readonly) ACAccountStore *accountStore;
@property (readonly, copy) NSString *serviceIdentifier;
@property (readonly) BOOL useCachedServiceToken;

- (void).cxx_destruct;
- (id)perform;
- (id)_authKitUpdateTask;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 serviceIdentifier:(id)a2 useCachedServiceToken:(BOOL)a3;
- (id)initWithAccount:(id)a0 serviceIdentifier:(id)a1;
- (id)initWithAccount:(id)a0 serviceIdentifier:(id)a1 useCachedServiceToken:(BOOL)a2;
- (id)performAuthKitUpdate;

@end
