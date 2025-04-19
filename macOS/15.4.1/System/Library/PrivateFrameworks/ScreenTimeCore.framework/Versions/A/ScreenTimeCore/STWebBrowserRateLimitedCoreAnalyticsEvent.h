@class NSString, NSDictionary;

@interface STWebBrowserRateLimitedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;

@end
