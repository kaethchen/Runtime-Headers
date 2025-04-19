@class NSMutableDictionary, NSDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface AppletConfigurationData : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSUserDefaults *userDefaults;
    NSDictionary *config;
    NSMutableDictionary *pluginCache;
    unsigned long long maErrorCount;
    BOOL retryInProgress;
    double maMetadataQueryInterval;
}

+ (void)init;
+ (BOOL)setConfiguration:(id)a0;
+ (id)getStaticConfig;
+ (id)getWuluSettings;
+ (id)dataHash;
+ (id)extraDebugScriptForModule:(id)a0;
+ (id)getDreamworksSettings;
+ (id)getExpressModeSettings;
+ (id)getHerculesSettings;
+ (id)getNFCSettings;
+ (id)getSlalomSettings;
+ (id)plasticCardScriptForModule:(id)a0;
+ (id)pluginDecoderForMid:(id)a0;
+ (id)scriptForModule:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
