@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface CESRSpeechProfileResourceMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_startSession;
- (id)_initWithQueue:(id)a0;
- (void)_stopSession;
- (void)_registerLaunchOnDemand;

@end
