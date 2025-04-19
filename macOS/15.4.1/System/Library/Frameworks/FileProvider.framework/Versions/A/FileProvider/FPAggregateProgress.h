@class NSMutableArray;

@interface FPAggregateProgress : NSProgress {
    NSMutableArray *_childProgresses;
}

- (void).cxx_destruct;
- (void)addChild:(id)a0;
- (void)cancel;
- (void)startReportingProgress;

@end
