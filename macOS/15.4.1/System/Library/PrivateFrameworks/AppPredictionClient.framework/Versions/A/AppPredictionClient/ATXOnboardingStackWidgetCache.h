@class NSDictionary, NSNumber, NSDate;

@interface ATXOnboardingStackWidgetCache : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *descriptorToAppLaunchData;
@property (readonly, nonatomic) NSDate *cacheUpdateDate;
@property (readonly, nonatomic) NSNumber *hasiCloudFamily;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAppLaunchDictionary:(id)a0;
- (id)initWithAppLaunchDictionary:(id)a0 cacheUpdateDate:(id)a1 hasiCloudFamily:(id)a2;

@end
