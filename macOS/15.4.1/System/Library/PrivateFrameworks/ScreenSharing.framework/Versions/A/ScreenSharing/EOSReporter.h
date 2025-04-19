@class NSMutableDictionary, NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface EOSReporter : NSObject

@property (retain) NSMutableDictionary *sessionReport;
@property (retain) NSDate *sessionStartTime;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSString *eventName;

- (void).cxx_destruct;
- (id)initWithEventName:(id)a0;
- (void)sendReport;
- (void)addItem:(id)a0 forKey:(id)a1;
- (void)logDictionary:(id)a0 toCAEvent:(id)a1;
- (id)quantizeDuration:(double)a0;

@end
