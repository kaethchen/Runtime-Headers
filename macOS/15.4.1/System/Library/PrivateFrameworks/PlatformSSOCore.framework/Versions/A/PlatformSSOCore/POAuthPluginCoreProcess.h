@class POServiceCoreConnection;

@interface POAuthPluginCoreProcess : NSObject {
    POServiceCoreConnection *_serviceConnection;
    unsigned int _uid;
}

- (void).cxx_destruct;
- (id)initWithUid:(unsigned int)a0 forLogin:(BOOL)a1;
- (void)insertTokenForUserName:(id)a0;
- (unsigned long long)verifyPasswordUser:(id)a0 passwordContext:(id)a1 tokens:(id *)a2;
- (BOOL)verifyTokenForUserName:(id)a0 passwordContext:(id)a1;
- (BOOL)bypassLoginPolicyForUserName:(id)a0 volume:(id)a1 contextData:(id)a2;
- (unsigned long long)exchangeKeyWithPublicKeyData:(id)a0 userName:(id)a1 passwordContext:(id)a2 exchangedKey:(id *)a3;
- (unsigned long long)getLoginTypeForUser:(id)a0;
- (unsigned long long)verifyPasswordLogin:(id)a0 passwordContext:(id)a1;

@end
