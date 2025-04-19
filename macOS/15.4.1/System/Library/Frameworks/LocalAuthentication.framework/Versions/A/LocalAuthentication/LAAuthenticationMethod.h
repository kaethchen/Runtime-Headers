@class LAAuthenticationMethodConfiguration, NSHashTable;

@interface LAAuthenticationMethod : NSObject {
    NSHashTable *_observers;
    BOOL _running;
}

@property (readonly, nonatomic) LAAuthenticationMethodConfiguration *configuration;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (BOOL)start;
- (void)terminate;
- (id)initWithConfiguration:(id)a0;
- (void)forEachObserverWithInvoke:(id /* block */)a0;
- (void)forEachObserverWithProtocol:(id)a0 selector:(SEL)a1 invoke:(id /* block */)a2;

@end
