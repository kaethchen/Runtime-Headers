@class NSString, NSData;

@interface FPDDomainPlistSignature : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *plistSigningAlgorithm;
@property (readonly, copy, nonatomic) NSData *plistSignature;

+ (id)getDataFromXattrForURL:(id)a0 error:(id *)a1;
+ (id)loadSignatureFromFileAtURL:(id)a0 shouldUpdateXattr:(BOOL *)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithAlgorithm:(struct __CFString { } *)a0 signature:(id)a1;
- (BOOL)stampOnFileAtURL:(id)a0 error:(id *)a1;
- (BOOL)validateContent:(id)a0 keychainManager:(id)a1 error:(id *)a2;

@end
