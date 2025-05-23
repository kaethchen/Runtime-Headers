@class NSArray;

@interface AVPlaybackCoordinator : NSObject

@property (readonly, nonatomic) NSArray *otherParticipants;
@property (readonly, nonatomic) NSArray *suspensionReasons;

+ (void)initialize;

- (id)init;
- (id)initInternal;
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { } *)a0;
- (id)_currentWaitingPoliciesArray;
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { } *)a0 proposingNewTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)beginSuspensionForReason:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })expectedItemTimeAtHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)participantLimitForWaitingOutSuspensionsWithReason:(id)a0;
- (BOOL)pauseSnapsToMediaTimeOfOriginator;
- (void)setParticipantLimit:(long long)a0 forWaitingOutSuspensionsWithReason:(id)a1;
- (void)setPauseSnapsToMediaTimeOfOriginator:(BOOL)a0;
- (void)setSuspensionReasonsThatTriggerWaiting:(id)a0;
- (id)suspensionReasonsThatTriggerWaiting;

@end
