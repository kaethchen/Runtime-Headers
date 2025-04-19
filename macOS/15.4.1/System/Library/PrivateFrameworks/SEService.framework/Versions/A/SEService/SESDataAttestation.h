@class NSString, NSData;

@interface SESDataAttestation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *appBundleID;
@property (retain, nonatomic) NSData *nonce;
@property (retain, nonatomic) NSData *signedData;
@property (retain, nonatomic) NSData *signature;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAppBundleID:(id)a0 nonce:(id)a1 signedData:(id)a2 signature:(id)a3;

@end
