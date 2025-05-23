@class NSString, AMSBagKeySet;

@interface AMSAnisette : NSObject <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_accountIDForType:(long long)a0 account:(id)a1;
+ (void)_bagDomainExistsForURL:(id)a0 type:(long long)a1 bag:(id)a2 completion:(id /* block */)a3;
+ (id)_eraseProvisioningForType:(long long)a0 account:(id)a1;
+ (id)_handleActionName:(id)a0 actionData:(id)a1 account:(id)a2 type:(long long)a3 bag:(id)a4;
+ (id)_headersForRequest:(id)a0 account:(id)a1 type:(long long)a2;
+ (id)_provisionMachineWithActionData:(id)a0 type:(long long)a1 account:(id)a2 bag:(id)a3;
+ (BOOL)_shouldRetryAfterError:(id)a0;
+ (id)_syncMachineWithActionData:(id)a0 type:(long long)a1 account:(id)a2 bag:(id)a3;
+ (id)createBagForSubProfile;
+ (BOOL)handleResponse:(id)a0 account:(id)a1 type:(long long)a2 bag:(id)a3;
+ (id)handleResponse:(id)a0 type:(long long)a1 bag:(id)a2 account:(id)a3;
+ (id)headersForRequest:(id)a0 account:(id)a1 type:(long long)a2 bag:(id)a3;


@end
