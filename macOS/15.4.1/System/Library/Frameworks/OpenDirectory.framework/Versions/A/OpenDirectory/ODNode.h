@class NSString, ODConfiguration;

@interface ODNode : NSObject {
    void *_internal;
}

@property (readonly, copy, nonatomic) NSString *nodeName;
@property (readonly) ODConfiguration *configuration;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)nodeWithSession:(id)a0 type:(unsigned int)a1 error:(id *)a2;
+ (id)nodeWithSession:(id)a0 name:(id)a1 error:(id *)a2;
+ (id)nodeWithSession:(id)a0 name:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)nodeWithSession:(id)a0 type:(unsigned int)a1 options:(id)a2 error:(id *)a3;

- (void)dealloc;
- (id)copy;
- (id)description;
- (unsigned long long)_cfTypeID;
- (id)session;
- (BOOL)replaceUserRecord:(id)a0 withRecord:(id)a1 attributes:(id)a2 password:(id)a3 options:(unsigned int)a4 error:(id *)a5;
- (struct __ODNode { } *)__getODNodeRef;
- (id)accountPoliciesAndReturnError:(id *)a0;
- (BOOL)addAccountPolicy:(id)a0 toCategory:(id)a1 error:(id *)a2;
- (id)createRecordWithRecordType:(id)a0 name:(id)a1 attributes:(id)a2 error:(id *)a3;
- (id)customCall:(long long)a0 sendData:(id)a1 error:(id *)a2;
- (id)customFunction:(id)a0 data:(id)a1 error:(id *)a2;
- (id)customFunction:(id)a0 payload:(id)a1 error:(id *)a2;
- (id)initWithSession:(id)a0 name:(id)a1 error:(id *)a2;
- (id)initWithSession:(id)a0 name:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initWithSession:(id)a0 type:(unsigned int)a1 error:(id *)a2;
- (id)initWithSession:(id)a0 type:(unsigned int)a1 options:(id)a2 error:(id *)a3;
- (id)nodeDetailsForKeys:(id)a0 error:(id *)a1;
- (BOOL)passwordContentCheck:(id)a0 forRecordName:(id)a1 error:(id *)a2;
- (id)policiesAndReturnError:(id *)a0;
- (id)recordWithRecordType:(id)a0 name:(id)a1 attributes:(id)a2 error:(id *)a3;
- (BOOL)removeAccountPolicy:(id)a0 fromCategory:(id)a1 error:(id *)a2;
- (BOOL)removePolicy:(id)a0 error:(id *)a1;
- (unsigned int)secureTokenRecoveryType;
- (BOOL)setAccountPolicies:(id)a0 error:(id *)a1;
- (BOOL)setCredentialsUsingKerberosCache:(id)a0 error:(id *)a1;
- (BOOL)setCredentialsWithBootstrapToken:(id)a0 error:(id *)a1;
- (BOOL)setCredentialsWithRecordType:(id)a0 authenticationType:(id)a1 authenticationItems:(id)a2 continueItems:(id *)a3 context:(id *)a4 error:(id *)a5;
- (BOOL)setCredentialsWithRecordType:(id)a0 recordName:(id)a1 password:(id)a2 error:(id *)a3;
- (BOOL)setCredentialsWithSecureToken:(id)a0 password:(id)a1 error:(id *)a2;
- (BOOL)setPolicies:(id)a0 error:(id *)a1;
- (BOOL)setPolicy:(id)a0 value:(id)a1 error:(id *)a2;
- (BOOL)setSecureTokenRecoveryCloudAndReturnError:(id *)a0;
- (BOOL)setSecureTokenRecoveryCloudUsingIdentity:(struct _PCSIdentityData { } *)a0 error:(id *)a1;
- (BOOL)setSecureTokenRecoveryMasterPasswordAndReturnError:(id *)a0;
- (id)setSecureTokenRecoveryPersonalAndReturnError:(id *)a0;
- (BOOL)setSecureTokenRecoveryPersonalKey:(id)a0 error:(id *)a1;
- (id)subnodeNamesAndReturnError:(id *)a0;
- (id)supportedAttributesForRecordType:(id)a0 error:(id *)a1;
- (id)supportedPoliciesAndReturnError:(id *)a0;
- (id)supportedRecordTypesAndReturnError:(id *)a0;
- (id)unreachableSubnodeNamesAndReturnError:(id *)a0;
- (BOOL)verifyCredentialsWithRecordType:(id)a0 authenticationType:(id)a1 authenticationItems:(id)a2 continueItems:(id *)a3 context:(id *)a4 error:(id *)a5;

@end
