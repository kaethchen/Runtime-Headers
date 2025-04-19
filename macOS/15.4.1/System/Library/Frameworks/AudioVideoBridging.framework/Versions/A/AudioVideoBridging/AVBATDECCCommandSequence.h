@class NSMutableArray;

@interface AVBATDECCCommandSequence : NSObject {
    NSMutableArray *_events;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _eventsLock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)addBarrier:(BOOL)a0;
- (void)addCommandEvent:(id)a0;
- (void)enumerateCommandSequenceUsingBlock:(id /* block */)a0;
- (BOOL)executeCommandSequence;
- (void)executeCommandSequenceAndNotify:(id /* block */)a0;

@end
