@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderResourcePool : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_resources;
    unsigned long long _sid;
}

+ (id)shared;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)flush;
- (void)_flush;
- (void)_checkInResource:(id)a0 forKey:(id)a1;
- (id)_checkOutResourceForKey:(id)a0 matching:(id /* block */)a1;
- (void)_evictResource:(id)a0 ifNotUsedSince:(id)a1;
- (id)_resourceMatching:(id /* block */)a0;
- (void)_scheduleEvictionOfResource:(id)a0;
- (void)checkInResource:(id)a0 forKey:(id)a1;
- (id)checkOutResourceForKey:(id)a0 matching:(id /* block */)a1;

@end
