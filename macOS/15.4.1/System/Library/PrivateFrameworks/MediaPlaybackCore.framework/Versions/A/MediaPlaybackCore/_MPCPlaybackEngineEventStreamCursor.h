@class MPCPlaybackEngineEventStream, MPCPlaybackEngineEvent, NSString;

@interface _MPCPlaybackEngineEventStreamCursor : NSObject <MPCPlaybackEngineEventStreamCursor> {
    unsigned long long _startNS;
    unsigned long long _endNS;
}

@property (readonly, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (readonly, nonatomic) MPCPlaybackEngineEvent *startEvent;
@property (readonly, nonatomic) MPCPlaybackEngineEvent *endEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)countOfPreviousEventsWithType:(id)a0 matchingPayload:(id)a1;
- (long long)countOfPreviousEventsWithTypes:(id)a0 matchingPayload:(id)a1;
- (id)cursorFromEvent:(id)a0 untilEvent:(id)a1;
- (id)cursorUntilEvent:(id)a0;
- (void)enumeratePreviousEventsWithType:(id)a0 matchingPayload:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumeratePreviousEventsWithType:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePreviousEventsWithTypes:(id)a0 matchingPayload:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumeratePreviousEventsWithTypes:(id)a0 usingBlock:(id /* block */)a1;
- (id)findPreviousEventWithType:(id)a0 matchingPayload:(id)a1;
- (id)findPreviousEventWithTypes:(id)a0 matchingPayload:(id)a1;
- (id)initWithEventStream:(id)a0 fromNanoSeconds:(unsigned long long)a1 endEvent:(id)a2;
- (id)initWithEventStream:(id)a0 startEvent:(id)a1 endEvent:(id)a2;

@end
