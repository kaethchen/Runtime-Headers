@class NSData, TKClientTokenSession, NSDictionary;

@interface TKClientTokenObject : NSObject {
    id _accessControlRef;
}

@property (readonly, nonatomic) TKClientTokenSession *session;
@property (readonly, nonatomic) NSData *objectID;
@property (readonly, nonatomic) NSData *accessControl;
@property (readonly, nonatomic) struct __SecAccessControl { } *accessControlRef;
@property (readonly, nonatomic) NSData *value;
@property (readonly, nonatomic) NSData *publicKey;
@property (readonly, nonatomic) NSDictionary *keychainAttributes;

- (void).cxx_destruct;
- (id)attestKeyObject:(id)a0 nonce:(id)a1 error:(id *)a2;
- (BOOL)bumpKeyWithError:(id *)a0;
- (BOOL)commitKeyWithError:(id *)a0;
- (id)operation:(long long)a0 data:(id)a1 algorithms:(id)a2 parameters:(id)a3 error:(id *)a4;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (id)decapsulate:(id)a0 algorithms:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)decrypt:(id)a0 algorithms:(id)a1 parameters:(id)a2 error:(id *)a3;
- (BOOL)deleteWithError:(id *)a0;
- (id)exchangeKey:(id)a0 algorithms:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)initWithSession:(id)a0 objectID:(id)a1 attributes:(id)a2;
- (id)operationResult:(id)a0 error:(id *)a1;
- (id)sign:(id)a0 algorithms:(id)a1 parameters:(id)a2 error:(id *)a3;

@end
