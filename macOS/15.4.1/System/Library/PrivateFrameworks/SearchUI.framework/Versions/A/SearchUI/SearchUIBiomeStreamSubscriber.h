@class BMStreamBase, NSString, BPSSink, NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue;

@interface SearchUIBiomeStreamSubscriber : NSObject

@property (retain, nonatomic) BMStreamBase *stream;
@property (retain, nonatomic) BPSSink *biomeSink;
@property (retain, nonatomic) NSNotificationCenter *center;
@property unsigned long long observerCount;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSString *streamIdentifier;
@property (readonly) BOOL finished;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (BOOL)isFinished;
- (void)updateWithEvent:(id)a0;
- (id)notificationName;
- (void)addObserver:(id)a0 selector:(SEL)a1;
- (id)initWithStreamIdentifier:(id)a0;
- (void)getLatestEventWithCompletion:(id /* block */)a0;
- (id)latestEvent;
- (id)queueLabel;
- (id)schedulerIdentifier;
- (void)setupSink;

@end
