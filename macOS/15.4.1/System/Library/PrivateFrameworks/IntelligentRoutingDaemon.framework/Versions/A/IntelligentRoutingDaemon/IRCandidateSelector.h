@interface IRCandidateSelector : NSObject

@property (nonatomic) BOOL candidateSelectorReasonRecentlyUsed;
@property (nonatomic) BOOL candidateSelectorReasonMostlyUsedSimilarApp;
@property (nonatomic) BOOL candidateSelectorReasonProximityWithHistoryOrSameICloud;
@property (nonatomic) BOOL candidateSelectorReasonProximity;
@property (nonatomic) BOOL candidateSelectorReasonMostlyUsedAnyApp;
@property (nonatomic) BOOL candidateSelectorReasonBrokeredMainDeviceFirstUse;
@property (nonatomic) BOOL candidateSelectorReasonSingle;

+ (BOOL)_isPickerChoiceOverrideActiveAtDate:(id)a0 withSystemState:(id)a1;

- (id)_candidatesToSelectFrom:(id)a0;
- (id)_nearestRangeCandidateFromCandidates:(id)a0;
- (id)_selectBasedOnContinuityFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (id)_selectBasedOnMostRecentMainBrokeredDeviceFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (id)_selectBasedOnMostUsedAnyAppFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (id)_selectBasedOnMostUsedSimilarAppFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (id)_selectBasedOnNearestRangeFromCandidates:(id)a0;
- (id)_selectBasedOnNearestRangeWithHistoryOrSameICloudFromCandidates:(id)a0 withSystemState:(id)a1;
- (id)_selectFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3 andRule:(id)a4;
- (id)adjustClassificationForCandidateBasedOnNegativeInputs:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andMiloPrediction:(id)a3 andDate:(id)a4;
- (id)getSelectorReasons;
- (id)selectFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;

@end
