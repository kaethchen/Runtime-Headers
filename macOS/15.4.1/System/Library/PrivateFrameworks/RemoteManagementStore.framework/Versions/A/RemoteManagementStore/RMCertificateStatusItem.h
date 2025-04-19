@class NSData;

@interface RMCertificateStatusItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *persistentRef;
@property (readonly, nonatomic) BOOL isIdentity;

+ (id)certificateStatusItemWithPersistentRef:(id)a0 isIdentity:(BOOL)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWithPersistentRef:(id)a0 isIdentity:(BOOL)a1;
- (BOOL)isEqualToCertificateStatus:(id)a0;

@end
