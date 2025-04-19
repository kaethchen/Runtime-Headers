@interface JERollItemsMediaActivityTracker : NSObject {
    void /* unknown type, empty encoding */ pipeline;
    void /* unknown type, empty encoding */ playlist;
    void /* unknown type, empty encoding */ trackerEventData;
    void /* unknown type, empty encoding */ topic;
    void /* unknown type, empty encoding */ playActivity;
    void /* unknown type, empty encoding */ seekActivity;
    void /* unknown type, empty encoding */ activity;
}

- (id)init;
- (void).cxx_destruct;
- (void)resetEventData:(id)a0;
- (id)initWithPipeline:(id)a0 playlist:(id)a1 eventData:(id)a2 topic:(id)a3;
- (void)jumpFromOverallPosition:(unsigned long long)a0 fromRollItem:(id)a1 toRollItem:(id)a2 eventData:(id)a3;
- (void)playStartedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 rollItem:(id)a3 eventData:(id)a4;
- (void)playStartedWithPlaybackRate:(float)a0 overallPosition:(unsigned long long)a1 type:(id)a2 reason:(id)a3 rollItem:(id)a4 eventData:(id)a5;
- (void)playStoppedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)seekStartedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 rollItem:(id)a3 eventData:(id)a4;
- (void)seekStoppedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 rollItem:(id)a3 eventData:(id)a4;
- (void)updateEventData:(id)a0;

@end
