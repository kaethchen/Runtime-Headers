@class NSMutableArray;

@interface CDPDXPCEventObserver : NSObject {
    NSMutableArray *_eventListeners;
}

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)start;
- (void)registerListener:(id)a0;
- (void)_setupDarwinListener;
- (void)_setupDistributedListener;

@end
