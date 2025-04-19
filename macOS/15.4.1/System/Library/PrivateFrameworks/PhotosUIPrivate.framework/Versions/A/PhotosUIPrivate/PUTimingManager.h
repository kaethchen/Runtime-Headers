@class NSMutableDictionary;

@interface PUTimingManager : NSObject {
    NSMutableDictionary *_stopwatches;
}

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (void)removeStopwatchForKey:(id)a0;
- (id)stopwatchForKey:(id)a0;

@end
