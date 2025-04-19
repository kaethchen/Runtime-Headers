@class NSMapTable;

@interface NSDisplayCycle : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    NSMapTable *_observersByPhase;
    unsigned int _seed;
    unsigned long long _changeCount;
    unsigned char _enabledLoggingUntilEndOfCycle : 1;
}

@property (class, readonly) NSDisplayCycle *currentDisplayCycle;

@property (readonly) unsigned long long identifier;

+ (BOOL)currentDisplayCycleContainsObserver:(id)a0;
+ (BOOL)currentDisplayCycleHasIdentifier:(unsigned long long)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)addObserver:(id)a0;
- (BOOL)containsObserver:(id)a0;
- (void)enableLoggingUntilEndOfCycle;
- (id)initWithTransactionSeed:(unsigned int)a0;

@end
