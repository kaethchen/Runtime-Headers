@class NSString;

@interface ASTUploadFilesCertsEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *certString;
@property (retain, nonatomic) NSString *pubKeyDigest;
@property (retain, nonatomic) NSString *sigAlgo;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCert:(id)a0 andPubKeyDigest:(id)a1 andSigAlgo:(id)a2;

@end
