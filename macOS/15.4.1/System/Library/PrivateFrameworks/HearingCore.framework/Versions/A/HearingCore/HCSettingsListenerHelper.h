@class HCSettings, NSMutableArray;

@interface HCSettingsListenerHelper : NSObject {
    id _listenerAddress;
    HCSettings *_delegate;
    NSMutableArray *_selectorKeys;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)addSelectorKey:(SEL)a0;
- (id)initWithListenerAddress:(id)a0 andDelegate:(id)a1;

@end
