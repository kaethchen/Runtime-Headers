@class AVWeakReferencingDelegateStorage, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVMetricEventStream : NSObject {
    struct __CFDictionary { } *_publisherByEventTimeline;
    NSMutableArray *_publishers;
    struct __CFArray { } *_eventTimelines;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    NSMutableArray *_metricEventClassesToSubscribe;
    BOOL _shouldSubscribeToAllMetricEventClasses;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)eventStream;

- (void)dealloc;
- (id)init;
- (BOOL)addPublisher:(id)a0;
- (void)addPublisher:(id)a0 eventTimeline:(struct OpaqueFigMetricEventTimeline { } *)a1;
- (id)contentKeyRequestEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
- (void)didReceiveEventForMetricEventTimeline:(struct OpaqueFigMetricEventTimeline { } *)a0 event:(struct OpaqueFigMetricEvent { } *)a1;
- (id)errorEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
- (long long)getFigMetricEventIDForAVMetricClass:(Class)a0;
- (id)initialLikelyToKeepUpEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
- (id)likelyToKeepUpEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
- (id)mediaSegmentRequestEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
- (id)metricEventForFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
- (id)playbackSummaryEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
- (id)playlistRequestEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
- (id)rateChangeEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
- (id)resourceRequestEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
- (id)seekDidCompleteEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
- (id)seekEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
- (BOOL)setSubscriber:(id)a0 queue:(id)a1;
- (id)stallEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
- (void)subscribeToAllMetricEvents;
- (void)subscribeToMetricEvent:(Class)a0;
- (void)subscribeToMetricEvents:(id)a0;
- (id)variantChangeEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
- (id)variantChangeStartEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;

@end
