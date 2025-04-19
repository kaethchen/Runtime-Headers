@class NSArray, NSMapTable, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction, OS_dispatch_source;

@interface WFDebouncer : NSObject {
    BOOL _pendingFire;
    void *_firingReasonsQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_transaction> *_transaction;
    NSMapTable *_targetTable;
    NSObject<OS_dispatch_source> *_delayTimer;
    NSObject<OS_dispatch_source> *_maximumDelayTimer;
}

@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double maximumDelay;
@property (readonly, nonatomic) id userInfo;
@property (readonly, nonatomic) NSArray *firingReasons;
@property (readonly, nonatomic) BOOL unboundedFiringReasons;
@property (readonly, nonatomic, getter=isPendingFire) BOOL pendingFire;

- (void)dealloc;
- (void).cxx_destruct;
- (void)fire;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)removeTarget:(id)a0 action:(SEL)a1;
- (void)poke;
- (id)initWithDelay:(double)a0 queue:(id)a1;
- (id)initWithDelay:(double)a0 maximumDelay:(double)a1 queue:(id)a2;
- (id)initWithDelay:(double)a0 maximumDelay:(double)a1 queue:(id)a2 userInfo:(id)a3 unboundedFiringReasons:(BOOL)a4;
- (void)pokeWithReason:(id)a0 userInfo:(id)a1;

@end
