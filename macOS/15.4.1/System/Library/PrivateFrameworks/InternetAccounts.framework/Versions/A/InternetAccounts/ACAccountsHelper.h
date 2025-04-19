@class ACAccountType;

@interface ACAccountsHelper : NSObject {
    ACAccountType *_type;
}

+ (id)store;
+ (id)storeQueue;

- (void).cxx_destruct;
- (id)type;
- (BOOL)removeAccount:(id)a0 error:(id *)a1;
- (id)accountWithUsername:(id)a0;
- (BOOL)requestAccess;
- (id)accountWithUID:(id)a0;
- (id)initWithACType:(id)a0;
- (id)makeAnAccount;
- (BOOL)saveAccount:(id)a0 verifyCredential:(BOOL)a1 error:(id *)a2;
- (id)storedAccounts;
- (BOOL)verifyAccount:(id)a0 error:(id *)a1;

@end
