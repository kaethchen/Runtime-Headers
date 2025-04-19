@class NSData;

@interface ASAuthorizationPublicKeyCredentialLargeBlobAssertionInput : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long operation;
@property (retain, nonatomic) NSData *dataToWrite;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOperation:(long long)a0;
- (id)_initWithOperation:(long long)a0 dataToWrite:(id)a1;

@end
