@class NSString, NSData, NSURL;

@interface ASTSealableFile : NSObject <NSSecureCoding> {
    NSURL *_fileURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *base64Signature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic, getter=isSealed) BOOL sealed;
@property (retain, nonatomic) NSURL *fileURL;

+ (id)sealedFileURL:(id)a0 signature:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileURL:(id)a0 signature:(id)a1;
- (BOOL)sealWithFileSigner:(id /* block */)a0 error:(id *)a1;

@end
