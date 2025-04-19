@class CKStoreAccount;

@interface FRJSAccount : FRJSObject

@property (readonly, nonatomic) CKStoreAccount *storeAccount;

- (void).cxx_destruct;
- (id)initWithStoreAccount:(id)a0;
- (id)callFunction:(id)a0 withArguments:(id)a1;

@end
