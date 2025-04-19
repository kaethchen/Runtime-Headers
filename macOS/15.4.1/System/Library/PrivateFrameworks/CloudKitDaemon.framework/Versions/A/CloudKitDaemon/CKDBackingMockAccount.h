@class NSString;
@protocol CKDTestDeviceProtocol, CKDTestAccountProtocol;

@interface CKDBackingMockAccount : CKDBackingAccount {
    NSString *_dsid;
}

@property (readonly, nonatomic) id<CKDTestAccountProtocol> testAccount;
@property (readonly, nonatomic) id<CKDTestDeviceProtocol> testDevice;

+ (id)mockAccountWithTestAccount:(id)a0 testDevice:(id)a1;

- (void).cxx_destruct;
- (id)identifier;
- (id)dsid;
- (id)username;
- (long long)accountType;
- (BOOL)isWarmingUp;
- (id)personaIdentifier;
- (id)displayedHostname;
- (id)fullName;
- (id)primaryEmail;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initMockAccountWithTestAccount:(id)a0 testDevice:(id)a1;
- (id)accountPropertiesForDataclass:(id)a0;
- (id)cloudKitAuthTokenWithError:(id *)a0;
- (id)iCloudAuthTokenWithError:(id *)a0;
- (BOOL)isAccountSuspended;
- (BOOL)isDataclassEnabled:(id)a0;
- (BOOL)isDataclassEnabledForCellular:(id)a0;
- (BOOL)isPrimaryEmailVerified;
- (void)renewAuthTokenWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)serverPreferredPushEnvironment;
- (id)sharingURLHostname;
- (id)suspendedAccountIdentifier;
- (void)validateVettingToken:(id)a0 vettingEmail:(id)a1 vettingPhone:(id)a2 completionHandler:(id /* block */)a3;

@end
