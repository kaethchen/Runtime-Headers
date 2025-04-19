@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SafeEjectGPU : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_array;
    NSMutableArray *_limboArray;
    NSObject<OS_dispatch_queue> *_limboQueue;
    BOOL _inLimbo;
}

+ (id)getPref:(id)a0 forApp:(id)a1;
+ (id)zombies;
+ (id)appsWithPref:(id)a0;
+ (id)evalPref:(id)a0 forApp:(id)a1;
+ (id)evalPref:(id)a0 forBundle:(id)a1;
+ (void)fallbackGPUEjectPolicy:(BOOL)a0;
+ (BOOL)fixedPref:(id)a0 forApp:(id)a1;
+ (void)removePref:(id)a0 forApp:(id)a1;
+ (void)setPref:(id)a0 forApp:(id)a1 to:(id)a2;
+ (unsigned long long)zcount;
+ (void)zkill;

- (void)dealloc;
- (id)init;
- (void)teardown;
- (void)zcancel;
- (void)generateAnalyticsReport:(BOOL)a0 forGPUId:(unsigned long long)a1 duration:(long long)a2;
- (unsigned long long)getPCIAddr:(unsigned long long)a0;
- (void)gpuAppMetricsEnd;
- (void)gpuAppMetricsStart;
- (id)gpus;
- (id)initWithDispatchQueue:(id)a0 andChangeHandler:(id /* block */)a1;
- (id)newSessionWithGPUID:(unsigned long long)a0;
- (void)updateGPUNumberAtLocation;
- (void)zDrainLimbo;
- (void)zrelaunch;

@end
