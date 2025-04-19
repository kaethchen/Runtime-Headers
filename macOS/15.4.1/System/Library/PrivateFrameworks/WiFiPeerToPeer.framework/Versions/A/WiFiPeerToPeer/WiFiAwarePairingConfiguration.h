@class NSArray;

@interface WiFiAwarePairingConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *supportedPairSetupMethods;
@property (readonly, nonatomic) BOOL pairingCachingEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSupportedPairSetupMethods:(id)a0 pairingCachingEnabled:(BOOL)a1;

@end
