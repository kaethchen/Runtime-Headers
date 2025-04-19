@class NSMutableArray, AXBaseSettings;

@interface AXSettingsObjectDestructionHelper : NSObject {
    void *_listenerAddress;
    NSMutableArray *_preferenceKeys;
    AXBaseSettings *_settings;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)addPreferenceKey:(id)a0;
- (id)initWithListenerAddress:(void *)a0 forSettings:(id)a1;

@end
