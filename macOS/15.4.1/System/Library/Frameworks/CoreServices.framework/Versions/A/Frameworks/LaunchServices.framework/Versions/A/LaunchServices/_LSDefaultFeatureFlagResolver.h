@class NSString;

@interface _LSDefaultFeatureFlagResolver : NSObject <LSFeatureFlagResolver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isFeature:(const char *)a0 enabledInDomain:(const char *)a1;

@end
