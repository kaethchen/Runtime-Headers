@class NSObject, NSHashTable;
@protocol INSAnalyticsDataSource, OS_dispatch_queue;

@interface INSAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_observerQueue;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) id<INSAnalyticsDataSource> dataSource;

+ (id)sharedAnalytics;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)_init;
- (void)addObserver:(id)a0;
- (void)logEventWithType:(long long)a0 context:(id)a1 contextNoCopy:(BOOL)a2;
- (id)contextDictionaryForCommand:(id)a0;
- (id)contextDictionaryForError:(id)a0;

@end
