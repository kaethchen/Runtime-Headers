@class _PASLock;

@interface SGSuggestionsWorkGroupManager : NSObject {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)finishProcessingForUniqueIdentifier:(id)a0;
- (void)waitForUniqueIdentifierToProcess:(id)a0;
- (void)waitForUniqueIdentifierToProcess:(id)a0 withTimeout:(double)a1;

@end
