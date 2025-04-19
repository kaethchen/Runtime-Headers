@class AFAnalytics, AFInstanceContext, AFPreferences;

@interface SVXModuleFactory : NSObject {
    AFInstanceContext *_instanceContext;
    AFPreferences *_preferences;
    AFAnalytics *_analytics;
}

- (void).cxx_destruct;
- (id)createModuleWithIdentifier:(id)a0 class:(Class)a1 performer:(id)a2;
- (id)createModuleWithIdentifier:(id)a0 class:(Class)a1 qos:(unsigned int)a2;
- (id)initWithInstanceContext:(id)a0 preferences:(id)a1 analytics:(id)a2;

@end
