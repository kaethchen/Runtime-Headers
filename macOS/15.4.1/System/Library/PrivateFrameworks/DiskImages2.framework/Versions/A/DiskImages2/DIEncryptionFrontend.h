@class NSUUID, DIBaseParams, NSString;

@interface DIEncryptionFrontend : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) DIBaseParams *diParams;
@property (readonly, copy, nonatomic) NSUUID *encryptionUUID;
@property (nonatomic) BOOL allowStoringInKeychain;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, copy, nonatomic) NSString *GUIPassphrasePrompt;
@property (readonly, copy, nonatomic) NSString *GUIPassphraseLabel;
@property (readonly, copy, nonatomic) NSString *GUIVerifyPassphraseLabel;
@property (readonly, copy, nonatomic) NSString *CLIPassphrasePrompt;
@property (readonly, copy, nonatomic) NSString *CLIVerifyPassphrasePrompt;

+ (BOOL)hasGUIaccess;
+ (BOOL)updateSystemKeychainAttrWithDict:(id)a0 isStoring:(BOOL)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParams:(id)a0;
- (BOOL)GUIAskForPassphraseWithError:(id *)a0;
- (BOOL)askPermissionWithRememberPassword:(BOOL *)a0 error:(id *)a1;
- (BOOL)checkWithHasIcloudKeychain:(BOOL *)a0 error:(id *)a1;
- (BOOL)consoleAskForPassphraseWithUseStdin:(BOOL)a0 error:(id *)a1;
- (id)getCertificateWithCertificatePath:(id)a0 error:(id *)a1;
- (id)getCertificateWithPublicKey:(id)a0 error:(id *)a1;
- (BOOL)storeInKeychainWithPassphrase:(id)a0 forceSystemKeychain:(BOOL)a1 error:(id *)a2;
- (BOOL)updateDiskImageParamsWithFrontend:(id)a0 error:(id *)a1;
- (BOOL)validateDeserializationWithError:(id *)a0;

@end
