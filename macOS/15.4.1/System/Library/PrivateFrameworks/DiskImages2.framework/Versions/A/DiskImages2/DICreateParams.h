@class NSString;

@interface DICreateParams : DIBaseParams

@property (nonatomic) unsigned long long numBlocks;
@property (nonatomic) unsigned long long encryptionMethod;
@property (copy, nonatomic) NSString *systemKeychainAccount;
@property (nonatomic) BOOL passphrase;
@property (copy, nonatomic) NSString *publicKey;
@property (copy, nonatomic) NSString *certificate;

+ (BOOL)supportsSecureCoding;
+ (BOOL)checkExistingFileWithURL:(id)a0 isDirectory:(BOOL)a1 error:(id *)a2;
+ (BOOL)eraseIfExistingWithURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 numBlocks:(unsigned long long)a1 error:(id *)a2;
- (BOOL)createWithError:(id *)a0;
- (BOOL)createDiskImageParamsWithError:(id *)a0;
- (void)createDiskImageParamsXPC;
- (BOOL)createEncryptionWithXPCHandler:(id)a0 error:(id *)a1;
- (BOOL)getCertificateWithEncryptionCreator:(id)a0 outCertificate:(id *)a1 error:(id *)a2;
- (BOOL)onErrorCleanup;
- (BOOL)resizeWithNumBlocks:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setPassphrase:(const char *)a0 error:(id *)a1;
- (BOOL)supportsPstack;
- (BOOL)tryCreateUsingKeychainCertificateWithError:(id *)a0;

@end
