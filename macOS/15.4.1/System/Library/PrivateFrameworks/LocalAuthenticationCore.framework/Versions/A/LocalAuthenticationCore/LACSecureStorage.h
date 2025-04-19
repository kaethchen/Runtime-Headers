@class NSString, LACSecureStorageConfiguration;
@protocol LACSecureStorageDelegate;

@interface LACSecureStorage : NSObject <LACSecureStorageType>

@property (readonly, nonatomic) LACSecureStorageConfiguration *config;
@property (weak, nonatomic) id<LACSecureStorageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isKeyAvailable:(long long)a0;
+ (Class)classForKey:(long long)a0;
+ (BOOL)isKeyAvailableForDataExchange:(long long)a0;
+ (long long)policyForKey:(long long)a0 operation:(long long)a1 value:(id)a2;
+ (id)additionalBoolEntitlementForKey:(long long)a0 operation:(long long)a1 value:(id)a2;
+ (BOOL)checkKey:(long long)a0 supportsOperation:(long long)a1;
+ (BOOL)isKeyAvailable:(long long)a0 operation:(long long)a1;
+ (id)maxDataLengthForKey:(long long)a0;
+ (id)minDataLengthForKey:(long long)a0;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (struct __ACMHandle { } *)_acmContextForUUID:(id)a0 error:(id *)a1;
- (void)_acmSEPControlForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_acmVariableForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)_checkEntitlementForKey:(long long)a0 operation:(long long)a1 value:(id)a2 connection:(id)a3 failureHandler:(id /* block */)a4;
- (id)_errorNotSupported;
- (void)_exchangeObject:(id)a0 request:(id)a1 connection:(id)a2 completionHandler:(id /* block */)a3;
- (id)_preprocessValue:(id)a0 forVariable:(unsigned int)a1 error:(id *)a2;
- (void)_protectedDataWithBundleId:(id)a0 contextID:(id)a1 completionHandler:(id /* block */)a2;
- (void)_sepControl:(unsigned int)a0 value:(id)a1 contextID:(id)a2 completionHandler:(id /* block */)a3;
- (void)_setProtectedData:(id)a0 acl:(id)a1 contextID:(id)a2 completionHandler:(id /* block */)a3;
- (void)_setVariable:(unsigned int)a0 value:(id)a1 contextID:(id)a2 completionHandler:(id /* block */)a3;
- (id)_storageObjectForKey:(long long)a0 data:(id)a1 error:(id *)a2;
- (void)_variable:(unsigned int)a0 withcontextID:(id)a1 completionHandler:(id /* block */)a2;
- (void)aclForRequest:(id)a0 connection:(id)a1 completionHandler:(id /* block */)a2;
- (void)objectForRequest:(id)a0 connection:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeObjectForRequest:(id)a0 connection:(id)a1 completionHandler:(id /* block */)a2;
- (void)setObject:(id)a0 forRequest:(id)a1 connection:(id)a2 completionHandler:(id /* block */)a3;

@end
