@class GKNATObserver, NSObject;
@protocol OS_dispatch_semaphore;

@interface DefaultGKViceroyNATObserver : NSObject <GKViceroyNATObserver, GKNATObserverDelegate>

@property (retain, nonatomic) GKNATObserver *natObserver;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *natSemaphore;
@property (nonatomic) int natType;

+ (id)syncQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)teardown;
- (void)performAsync:(id /* block */)a0;
- (void)NATTypeDidChange:(int)a0;
- (void)_getNATTypeWithNATSettings:(id)a0 completionHandler:(id /* block */)a1;
- (void)getNATTypeWithNATSettings:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isValidSettings:(id)a0;

@end
