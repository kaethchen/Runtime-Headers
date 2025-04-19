@class NSString;

@interface IDSFeatureToggleUpdateOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *featureID;
@property (nonatomic) unsigned long long state;

+ (id)optionsWithFeatureID:(id)a0 state:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeatureID:(id)a0 state:(unsigned long long)a1;

@end
