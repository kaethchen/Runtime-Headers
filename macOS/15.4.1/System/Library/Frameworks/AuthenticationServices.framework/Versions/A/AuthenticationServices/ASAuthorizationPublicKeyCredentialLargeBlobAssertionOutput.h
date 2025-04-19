@class NSData;

@interface ASAuthorizationPublicKeyCredentialLargeBlobAssertionOutput : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *readData;
@property (readonly, nonatomic) BOOL didWrite;

+ (id)_outputWithData:(id)a0 didWrite:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithData:(id)a0 didWrite:(BOOL)a1;

@end
