@class NSArray, NSString, IDSAccount;

@interface IMDAppleServiceSession : IMDServiceSession {
    NSString *_serviceName;
}

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;
@property (readonly, retain, nonatomic) NSArray *aliases;
@property (readonly, retain, nonatomic) NSArray *vettedAliases;
@property (readonly, retain, nonatomic) NSString *callerURI;
@property (readonly, nonatomic) NSArray *registeredURIs;
@property (readonly, retain, nonatomic) NSString *GUID;

+ (id)idsAccounts;

- (void)dealloc;
- (void)authenticateAccount:(id)a0;
- (void)registerAccount:(id)a0;
- (void)unregisterAccount:(id)a0;
- (id)_aliases;
- (void)addAliases:(id)a0 account:(id)a1;
- (void)removeAliases:(id)a0 account:(id)a1;
- (void)unvalidateAliases:(id)a0 account:(id)a1;
- (void)updateAuthorizationCredentials:(id)a0 token:(id)a1 account:(id)a2;
- (void)validateAliases:(id)a0 account:(id)a1;
- (long long)validationStatusForAlias:(id)a0;
- (void)loginServiceSessionWithAccount:(id)a0;
- (id)_aliasStringsForIDSAccount:(id)a0;
- (id)_aliasesForIDSAccount:(id)a0;
- (BOOL)_isDeviceRegistered;
- (BOOL)_isDeviceRegisteredForAccount:(id)a0;
- (void)_updateAccountStatusToUnregistered:(BOOL)a0 withAccount:(id)a1;
- (long long)_validationStatusForAlias:(id)a0 onAccount:(id)a1;
- (void)activeDevicesUpdated;
- (id)callerURIForIDSAccount:(id)a0;
- (id)idsAccountForFromURI:(id)a0 toURI:(id)a1;
- (id)idsAccountForURI:(id)a0 IDSServiceName:(id)a1;
- (id)imdAccountForIDSAccount:(id)a0;
- (id)initWithAccount:(id)a0 service:(id)a1;
- (BOOL)isiMessageServiceIDSAccount:(id)a0;
- (void)logoutServiceSessionWithAccount:(id)a0;
- (void)passwordUpdatedWithAccount:(id)a0;
- (void)reIdentify;
- (void)refreshRegistration;
- (void)reregister;
- (void)resetCallerIDForIDSAccount:(id)a0;
- (void)sessionDidBecomeActive;
- (void)sessionWillBecomeInactiveWithAccount:(id)a0;
- (void)tryToRepairCallerID:(id)a0 forIDSAccount:(id)a1;
- (void)validateProfileWithAccount:(id)a0;
- (long long)validationStatusForAlias:(id)a0 onAccount:(id)a1;

@end
