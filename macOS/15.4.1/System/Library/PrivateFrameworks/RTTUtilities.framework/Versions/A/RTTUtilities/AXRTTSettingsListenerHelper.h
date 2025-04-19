@class NSMutableArray;

@interface AXRTTSettingsListenerHelper : NSObject {
    void *_listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)addSelectorKey:(SEL)a0;
- (id)initWithListenerAddress:(void *)a0;

@end
