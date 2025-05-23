@class HUAccessoryManager, NSMutableArray;

@interface HUAccessoryListenerHelper : NSObject {
    id _listenerAddress;
    HUAccessoryManager *_delegate;
    NSMutableArray *_keys;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)addKey:(id)a0;
- (id)initWithListenerAddress:(id)a0 andDelegate:(id)a1;

@end
