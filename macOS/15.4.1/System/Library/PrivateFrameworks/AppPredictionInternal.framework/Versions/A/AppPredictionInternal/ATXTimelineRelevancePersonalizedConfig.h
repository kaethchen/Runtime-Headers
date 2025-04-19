@class NSDictionary;

@interface ATXTimelineRelevancePersonalizedConfig : NSObject {
    NSDictionary *_personalizedConfiguration;
}

- (id)init;
- (void).cxx_destruct;
- (id)_readPersonalizedConfiguration;
- (id)initWithPersonalizedConfiguration:(id)a0;
- (id)personalizedValueForParameter:(id)a0 forWidgetBundleIdentifier:(id)a1 kind:(id)a2;

@end
