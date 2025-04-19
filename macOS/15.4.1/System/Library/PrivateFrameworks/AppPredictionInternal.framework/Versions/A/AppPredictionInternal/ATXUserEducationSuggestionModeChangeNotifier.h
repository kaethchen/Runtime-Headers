@class BPSSink, NSHashTable, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXUserEducationSuggestionModeChangeNotifier : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)processModeChangeEvent:(id)a0;

@end
