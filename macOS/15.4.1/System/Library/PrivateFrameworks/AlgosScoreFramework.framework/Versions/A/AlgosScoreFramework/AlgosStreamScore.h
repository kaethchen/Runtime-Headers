@interface AlgosStreamScore : NSObject {
    void *streamData;
    double logisticScale;
}

@property (nonatomic) BOOL debug;
@property (nonatomic) BOOL enforceStreamEnd;
@property (nonatomic) BOOL music;

+ (id)streamScore;

- (void)dealloc;
- (id)init;
- (void)clearStreamRows;
- (id)scoreStreaming:(id)a0;
- (void)addRawStreamEvent:(int)a0 start:(double)a1 end:(double)a2 weight:(double)a3 quality:(double)a4 params:(id)a5;
- (void)addStreamEnd:(double)a0;
- (void)addStreamFailure:(double)a0 weight:(double)a1;
- (void)addStreamPenalty:(double)a0 amount:(double)a1;
- (void)addStreamStall:(double)a0 end:(double)a1 quality:(double)a2 weight:(double)a3;
- (void)addStreamStall:(double)a0 end:(double)a1 quality:(double)a2 weight:(double)a3 params:(id)a4;
- (void)addStreamStart:(double)a0 play:(double)a1;
- (void)addStreamStartupStall:(double)a0 end:(double)a1 quality:(double)a2 weight:(double)a3;
- (void)addStreamTierSwitch:(double)a0 end:(double)a1 quality:(double)a2 weight:(double)a3;
- (double)findTotalTime:(id)a0 debug:(BOOL)a1;
- (BOOL)restoreEventsFromFile:(id)a0 clear:(BOOL)a1;
- (BOOL)saveEventsToFile:(id)a0;

@end
