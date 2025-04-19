@class NSString, NSMutableSet, DNDModeConfigurationService;

@interface PSUModeConfigurationService : NSObject <DNDModeConfigurationServiceListener> {
    NSMutableSet *_modesWithIntelligentBreakthroughEnabled;
    DNDModeConfigurationService *_modeService;
    BOOL _didCompleteOneSuccessfulModeConfigurationFetch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)modeConfigurationService:(id)a0 didReceiveAvailableModesUpdate:(id)a1;
- (void)_updateModesWithIntelligentBreakthroughEnabled;
- (BOOL)doesModeHaveIntelligentBreakthroughEnabled:(id)a0;

@end
