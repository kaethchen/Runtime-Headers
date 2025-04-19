@class NSArray, NSMapTable, NSPointerArray;

@interface NSDisplayCyclePhaseCollection : NSObject {
    unsigned long long _changeCount;
    NSMapTable *_earlierPhasesByPhase;
    NSPointerArray *_orderedPhases;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (class, readonly) NSDisplayCyclePhaseCollection *globalCollection;

@property (readonly) NSArray *orderedPhases;
@property (readonly) unsigned long long changeCount;

- (void)dealloc;
- (id)init;
- (void)addPhase:(id)a0;

@end
