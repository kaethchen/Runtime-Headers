@class ATXPOICategoryEventAggregator, BPSSink, BMBiomeScheduler, BMStream, NSObject;
@protocol OS_dispatch_queue;

@interface ATXPOICategoryVisitDataProvider : NSObject

@property (retain, nonatomic) ATXPOICategoryEventAggregator *streamAggregator;
@property (retain, nonatomic) BMStream *stream;
@property (retain, nonatomic) BMBiomeScheduler *scheduler;
@property (retain, nonatomic) BPSSink *sink;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStream:(id)a0;
- (id)getCurrentVisit;
- (void)subscribeToPOIChangesForCategories:(id)a0 observer:(id)a1 enterSelector:(SEL)a2 exitSelector:(SEL)a3 sinkCompletion:(id /* block */)a4;
- (void)unsubscribeToPOIChanges;
- (id)getCurrentVisitAtDate:(id)a0;
- (BOOL)hasExitedAllCategories:(id)a0;

@end
