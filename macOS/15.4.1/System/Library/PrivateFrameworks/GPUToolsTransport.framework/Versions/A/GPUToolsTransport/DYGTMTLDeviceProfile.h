@class NSString, NSArray, NSDictionary;
@protocol MTLDevice;

@interface DYGTMTLDeviceProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long streamRef;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *supportedFeatureSets;
@property (copy, nonatomic) NSArray *supportedGPUFamilies;
@property (copy, nonatomic) NSDictionary *defaultSamplePositions;
@property (nonatomic) id<MTLDevice> device;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
