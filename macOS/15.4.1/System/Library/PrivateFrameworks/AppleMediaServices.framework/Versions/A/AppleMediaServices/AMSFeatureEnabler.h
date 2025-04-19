@class NSHTTPCookie;

@interface AMSFeatureEnabler : NSObject

@property (class, readonly) NSHTTPCookie *cookie;

+ (void)clear;
+ (id)_fetchEnabledFeatures;

@end
