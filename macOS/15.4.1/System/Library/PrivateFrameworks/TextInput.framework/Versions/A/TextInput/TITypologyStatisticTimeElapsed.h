@class TITypologyTimer;

@interface TITypologyStatisticTimeElapsed : TITypologyStatistic

@property (retain, nonatomic) TITypologyTimer *timer;
@property (retain, nonatomic) TITypologyTimer *adjustedTimer;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) double adjustedElapsedTime;

- (id)init;
- (void).cxx_destruct;
- (id)aggregateReport;
- (id)structuredReport;
- (void)visitRecordKeyboardInput:(id)a0;

@end
