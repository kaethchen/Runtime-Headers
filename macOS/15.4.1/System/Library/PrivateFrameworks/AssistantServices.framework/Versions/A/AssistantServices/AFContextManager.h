@interface AFContextManager : NSObject {
    struct __CFArray { } *_contextProviders;
    int _notifyToken;
}

+ (id)defaultContextManager;

- (void)dealloc;
- (id)init;
- (void)_startListening;
- (void)_stopListening;
- (void)_collateContextsIntoArray:(id)a0;
- (id)_serverName;
- (BOOL)addContextProvider:(id)a0;
- (void)removeContextProvider:(id)a0;

@end
