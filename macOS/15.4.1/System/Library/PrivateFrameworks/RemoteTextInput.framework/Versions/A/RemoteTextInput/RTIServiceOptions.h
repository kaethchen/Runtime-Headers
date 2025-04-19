@interface RTIServiceOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int serviceDeviceClass;
@property (nonatomic) unsigned long long displayOptions;

+ (id)combinedServiceOptions:(id)a0;
+ (id)defaultServiceOptions;
+ (id)defaultServiceOptionsForService:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
