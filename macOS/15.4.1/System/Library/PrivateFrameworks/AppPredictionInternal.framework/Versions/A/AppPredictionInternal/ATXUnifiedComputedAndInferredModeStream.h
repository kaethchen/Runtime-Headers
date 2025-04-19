@class NSArray, BPSPublisher, NSMutableArray;

@interface ATXUnifiedComputedAndInferredModeStream : NSObject {
    BPSPublisher *_computedModePublisher;
    BPSPublisher *_inferredModePublisher;
    NSMutableArray *_modeEvents;
}

@property (readonly, nonatomic) NSArray *unifiedModeEventsInTimeRange;

+ (id)currentUnifiedModeEventAtGivenTime:(id)a0;

- (void).cxx_destruct;
- (void)addComputedModeEventToArrayStream:(id)a0 withStartTime:(double)a1 endTime:(double)a2;
- (void)addInferredModeEventToArrayStream:(id)a0 withStartTime:(double)a1 endTime:(double)a2;
- (BOOL)checkForOverlappingTimeRanges:(id)a0;
- (void)computeUnifiedModeEventsFromStartTime:(id)a0 toEndTime:(id)a1;
- (id)fetchUnifiedModeEvents;
- (id)initWithComputedModePublisher:(id)a0 inferredModePublisher:(id)a1 startTime:(id)a2 endTime:(id)a3;
- (id)initWithStartTime:(id)a0 toEndTime:(id)a1;

@end
