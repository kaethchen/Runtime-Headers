@class NSString;

@interface HMDCameraMetricsMilestone : HMFObject

@property (readonly, copy) NSString *key;
@property (readonly) long long timestamp;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithKey:(id)a0 timestamp:(long long)a1;

@end
