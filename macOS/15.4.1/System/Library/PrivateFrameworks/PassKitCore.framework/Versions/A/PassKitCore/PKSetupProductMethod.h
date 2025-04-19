@interface PKSetupProductMethod : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (void)_copyInto:(id)a0;
- (void)_decorateDescription:(id)a0;
- (id)_displayNameForCardType:(id)a0;
- (id)_inAppProvisioningURLWthScheme:(id)a0 path:(id)a1;

@end
