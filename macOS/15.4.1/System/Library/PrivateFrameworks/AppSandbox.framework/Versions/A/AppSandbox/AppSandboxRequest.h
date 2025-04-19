@class NSData, NSString, NSArray, CodeIdentity, NSDictionary, AppSandboxEntitlements, ASBMutableContainerSynchronization, NSNumber;

@interface AppSandboxRequest : NSObject {
    CodeIdentity *_codeIdentity;
    AppSandboxEntitlements *_entitlements;
}

@property (retain, nonatomic) NSString *userAccountHomeDirectoryRealPath;
@property (retain, nonatomic) NSString *mainExecutableBundleRealPath;
@property (retain, nonatomic) ASBMutableContainerSynchronization *sync;
@property (retain, nonatomic) NSString *mainBundleIdentifier;
@property (retain, nonatomic) NSDictionary *sandboxProfileValidationInfo;
@property (nonatomic) BOOL saveContainer;
@property (retain, nonatomic) NSData *sandboxProfile;
@property (retain, nonatomic) NSString *containerDataPath;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSNumber *quarantineFlags;
@property (retain, nonatomic) NSArray *extensionTokens;
@property (nonatomic) BOOL requiresMigration;
@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) unsigned int userId;
@property (nonatomic) unsigned int groupId;
@property (copy, nonatomic) NSString *userAccountName;
@property (copy, nonatomic) NSString *userAccountHomeDirectoryPath;
@property (copy, nonatomic) NSString *mainExecutableBundlePath;
@property (retain, nonatomic) NSArray *systemProfiles;
@property (retain, nonatomic) NSArray *systemImages;
@property (retain, nonatomic) NSArray *otherImages;
@property (nonatomic) BOOL iOSAppOnMac;
@property (nonatomic) BOOL developerMode;

+ (BOOL)_setFatalError:(id *)a0 withMessage:(id)a1;
+ (BOOL)_setFatalError:(id *)a0 withUserInfo:(id)a1 Message:(id)a2;
+ (BOOL)_setFatalError:(id *)a0 withUserInfo:(id)a1 Message:(id)a2 Parameters:(char *)a3;
+ (id)appSandboxRequestForApplicationAtURL:(id)a0 error:(id *)a1;
+ (id)appSandboxRequestForAuditToken:(struct { unsigned int x0[8]; })a0 error:(id *)a1;
+ (id)implicitIosProfilePaths;
+ (id)implicitMacosProfilePaths;

- (void).cxx_destruct;
- (BOOL)compileSandboxProfileWithError:(id *)a0;
- (void)_createAndPopulateGroupContainerTokens;
- (BOOL)_profileTimestampsAreValid;
- (BOOL)appsandboxContainerSync:(id *)a0;
- (BOOL)augmentError:(id *)a0;
- (BOOL)containerWithError:(id *)a0;
- (void)deriveQuarantineFlags;
- (BOOL)displaySharingConsentPrompt:(id *)a0;
- (BOOL)executeRequestWithError:(id *)a0;
- (BOOL)generateSandboxProfileValidationInfo:(id *)a0;
- (BOOL)getSandboxProfileWithError:(id *)a0;
- (id)initWithCodeIdentity:(id)a0 entitlements:(id)a1;
- (BOOL)screenSaverRequest;

@end
