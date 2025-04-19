@class NSString;

@interface LACDTOFeatureEnablementMode : NSObject <LACDTOFeatureEnablementMode>

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isGracePeriodEnabled;
@property (readonly, nonatomic) unsigned char rawValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)enabled;
+ (id)disabled;
+ (id)enabledWithGracePeriodUnlimited;
+ (id)enabledWithGracePeriod;

- (BOOL)isEqual:(id)a0;
- (id)initWithIsEnabled:(BOOL)a0 isGracePeriodEnabled:(BOOL)a1 rawValue:(unsigned char)a2;

@end
