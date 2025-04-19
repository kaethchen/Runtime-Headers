@class NSMutableDictionary;

@interface FlowScrutinizer : NSObject

@property (retain, nonatomic) NSMutableDictionary *originLedgers;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isFlushableOriginLedgerAfterFlushingSubsidiaries:(id)a0 atMachAbsTime:(unsigned long long)a1;
- (id)_findFlowOriginLedgerWithSnapshot:(id)a0;
- (void)addActivityBitmapFromSnapshot:(id)a0;
- (void)flushInactiveLedgersAtMachAbsTime:(unsigned long long)a0;

@end
