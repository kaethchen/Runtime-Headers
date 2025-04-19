@class NSString, NUJobPriorityQueue, NSObject;
@protocol OS_dispatch_queue;

@interface NUJobQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NUJobPriorityQueue *_interactiveQueue;
    NUJobPriorityQueue *_initiatedQueue;
    long long _updateGroupLevel;
    NSString *_name;
}

@property (readonly) long long stage;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)removeJob:(id)a0;
- (void)addJob:(id)a0;
- (void)_addJob:(id)a0;
- (void)_addJobs:(id)a0;
- (void)_decrementGroupLevel;
- (void)_finishedPriorityQueue:(id)a0;
- (void)_incrementGroupLevel;
- (void)_removeJob:(id)a0;
- (void)_startRunningIfNeeded;
- (void)addJobs:(id)a0;
- (void)finishedPriorityQueue:(id)a0;
- (id)initWithStage:(long long)a0 name:(id)a1;

@end
