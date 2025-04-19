@interface ANSTISPInferenceConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) unsigned long long _version;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL useE5;
@property (readonly, nonatomic) unsigned long long version;
@property (nonatomic, getter=isObjectTrackingEnabled) BOOL objectTrackingEnabled;
@property (nonatomic, getter=isSegmentationEnabled) BOOL segmentationEnabled;
@property (nonatomic) long long resolution;
@property (nonatomic) long long frameRate;

+ (id)new;
+ (id)defaultConfigurationForVersion:(unsigned long long)a0 withError:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForVersion:(unsigned long long)a0 withError:(id *)a1;

@end
