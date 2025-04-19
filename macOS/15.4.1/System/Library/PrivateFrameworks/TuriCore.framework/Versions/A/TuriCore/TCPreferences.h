@class NSMutableDictionary;

@interface TCPreferences : NSObject

@property (retain, nonatomic) NSMutableDictionary *properties;
@property (readonly) long long devicePolicy;

+ (id)userPreferences;
+ (id)defaultPreferences;
+ (void)setOverridePreferences:(id)a0;

- (void).cxx_destruct;
- (id)initWithProperties:(id)a0;
- (id)initWithDefaults;
- (void)setDevicePolicy:(long long)a0;

@end
