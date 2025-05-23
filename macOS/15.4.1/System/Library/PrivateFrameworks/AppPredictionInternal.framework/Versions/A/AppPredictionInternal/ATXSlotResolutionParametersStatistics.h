@class NSMutableDictionary, NSMutableSet, NSDate;

@interface ATXSlotResolutionParametersStatistics : NSObject {
    int _totalUndecayedOccurrences;
    double _weightedNumOccurrences;
    int _numParameters;
    NSDate *_latestAppSessionStartDate;
    NSMutableSet *_uniqueDaysLaunched;
    NSDate *_earliestOccurrenceTime;
    NSDate *_latestOccurrenceTime;
    double _totalConfirms;
    double _totalRejects;
    double _totalExplicitRejectsNoDecay;
    double _minutesSinceLastConfirmInSpotlight;
    double _minutesSinceLastExplicitRejectInSpotlight;
    double _minutesSinceLastConfirmInLockscreen;
    double _minutesSinceLastRejectInLockscreen;
    double _minutesSinceLastExplicitRejectInLockscreen;
    double _minutesSinceLastExplicitRejectInHomeScreen;
    double _totalConfirmsInLastHourInSpotlight;
    double _totalRejectsInLastHourInSpotlight;
    double _totalConfirmsInLastTwoHoursInSpotlight;
    double _totalRejectsInLastTwoHoursInSpotlight;
    double _totalConfirmsTodayInSpotlight;
    double _totalRejectsTodayInSpotlight;
    double _totalConfirmsInSpotlight;
    double _totalRejectsInSpotlight;
    double _totalConfirmsTodayInLockscreen;
    double _totalRejectsTodayInLockscreen;
    double _totalConfirmsInLockscreen;
    double _totalRejectsInLockscreen;
    double _totalOccurrences;
    double _totalTimeOfDayOccurrences;
    double _totalDayOfWeekOccurrences;
    double _totalPartOfWeekOccurrences;
    double _totalLocationOccurrences;
    double _totalPreviousLocationOccurrences;
    double _totalMotionTypeOccurrences;
    double _totalTimeAndDayOccurrences;
    double _totalTimeAndLocationOccurrences;
    double _totalDayAndLocationOccurrences;
    double _totalTimeAndDayAndLocationOccurrences;
    double _totalPrevLocationAndMotionTypeOccurrences;
    double _totalPrevLocationAndLocationOccurrences;
    double _totalTimeAndPrevLocationOccurrences;
    double _totalDayAndPrevLocationOccurrences;
    double _totalPartOfWeekAndLocationOccurrences;
    double _totalPartOfWeekAndTimeOccurrences;
    double _timeOfDayCount;
    double _thirtyMinuteWindowCount;
    double _hourWindowCount;
    double _eightHourWindowCount;
    double _coarseTimeOfDayCount;
    double _dayOfWeekCount;
    double _partOfWeekCount;
    double _partOfWeekAndLocationCount;
    double _locationCount;
    double _motionTypeCount;
    double _prevLocationCount;
    double _timeAndLocationCount;
    double _timeAndDayCount;
    double _dayAndLocationCount;
    double _timeAndDayAndLocationCount;
    double _prevLocationAndMotionTypeCount;
    double _prevLocationAndLocationCount;
    double _timeAndPrevLocationCount;
    double _dayAndPrevLocationCount;
    double _partOfWeekAndTimeCount;
    double _confirmsPartOfWeekCountInSpotlight;
    double _confirmsDayCountInSpotlight;
    double _confirmsTimeOfDayCountInSpotlight;
    double _confirmsCoarseTimeOfDayCountInSpotlight;
    double _confirmsPartOfWeekCountInLockscreen;
    double _confirmsDayCountInLockscreen;
    double _confirmsTimeOfDayCountInLockscreen;
    double _confirmsCoarseTimeOfDayCountInLockscreen;
    double _appSessionCountAsDocFreq;
    double _timeOfDayBudgetMean;
    double _timeOfDayBudgetCount;
    double _timeOfDayBudgetSumOfSquaresOfDifferencesFromMean;
    double _todaysTimeOfDayBudget;
    double _timeOfDayBudget;
    double _coarseTimePOWLocationCount;
    double _totalCoarseTimePOWLocationOccurrences;
    double _confirmsCoarseTimePOWLocationCount;
    double _totalConfirmsCoarseTimePOWLocationOccurrences;
    double _rejectsCoarseTimePOWLocationCount;
    double _totalRejectsCoarseTimePOWLocationOccurrences;
    double _specificTimeDOWLocationCount;
    double _totalSpecificTimeDOWLocationOccurrences;
    double _confirmsSpecificTimeDOWLocationCount;
    double _totalConfirmsSpecificTimeDOWLocationOccurrences;
    double _rejectsSpecificTimeDOWLocationCount;
    double _totalRejectsSpecificTimeDOWLocationOccurrences;
    double _launchesDayOfWeekForAction;
    double _launchesCoarseGeoHashForActionInContext;
    double _launchesCoarseGeoHashForAction;
    double _launchesSpecificGeoHashForActionInContext;
    double _launchesSpecificGeoHashForAction;
    double _launchesTimeOfDayForAction;
    double _confirmsTimeOfDayForActionInContext;
    double _confirmsTimeOfDayForAction;
    double _rejectsTimeOfDayForActionInContext;
    double _rejectsTimeOfDayForAction;
    double _confirmsDayOfWeekForActionInContext;
    double _confirmsDayOfWeekForAction;
    double _rejectsDayOfWeekForActionInContext;
    double _rejectsDayOfWeekForAction;
    double _confirmsCoarseGeoHashForActionInContext;
    double _confirmsCoarseGeoHashForAction;
    double _rejectsCoarseGeoHashForActionInContext;
    double _rejectsCoarseGeoHashForAction;
    double _confirmsSpecificGeoHashForActionInContext;
    double _confirmsSpecificGeoHashForAction;
    double _rejectsSpecificGeoHashForActionInContext;
    double _rejectsSpecificGeoHashForAction;
    double _homeScreenActionConfirmsOnDayOfWeekForActionInContext;
    double _homeScreenActionConfirmsOnDayOfWeekForAction;
    double _homeScreenActionRejectsOnDayOfWeekForActionInContext;
    double _homeScreenActionRejectsOnDayOfWeekForAction;
    double _homeScreenActionConfirmsAtTimeOfDayForActionInContext;
    double _homeScreenActionConfirmsAtTimeOfDayForAction;
    double _homeScreenActionRejectsAtTimeOfDayForActionInContext;
    double _homeScreenActionRejectsAtTimeOfDayForAction;
    double _homeScreenActionConfirmsAtCoarseGeohashForActionInContext;
    double _homeScreenActionConfirmsAtCoarseGeohashForAction;
    double _homeScreenActionRejectsAtCoarseGeohashForActionInContext;
    double _homeScreenActionRejectsAtCoarseGeohashForAction;
    double _homeScreenActionConfirmsAtSpecificGeohashForActionInContext;
    double _homeScreenActionConfirmsAtSpecificGeohashForAction;
    double _homeScreenActionRejectsAtSpecificGeohashForActionInContext;
    double _homeScreenActionRejectsAtSpecificGeohashForAction;
    double _homeScreenActionConfirmsAtCoarseTimePOWLocationForActionInContext;
    double _homeScreenActionConfirmsAtCoarseTimePOWLocationForAction;
    double _homeScreenActionRejectsAtCoarseTimePOWLocationForActionInContext;
    double _homeScreenActionRejectsAtCoarseTimePOWLocationForAction;
    double _homeScreenActionConfirmsAtSpecificTimeDOWLocationForActionInContext;
    double _homeScreenActionConfirmsAtSpecificTimeDOWLocationForAction;
    double _homeScreenActionRejectsAtSpecificTimeDOWLocationForActionInContext;
    double _homeScreenActionRejectsAtSpecificTimeDOWLocationForAction;
    double _entropyTimeOfDayForAction;
    double _entropyDayOfWeekForAction;
    double _entropyCoarseGeoHashForAction;
    double _entropySpecificGeoHashForAction;
    NSMutableDictionary *_dayOfWeekDistributionOfLaunches;
    NSMutableDictionary *_timeOfDayDistributionOfLaunches;
    NSMutableDictionary *_coarseGeoHashDistributionOfLaunches;
    NSMutableDictionary *_specificGeoHashDistributionOfLaunches;
}

+ (double)_smoothedBudgetForTimeOfDay:(long long)a0 currentTimeOfDay:(long long)a1;
+ (double)_smoothedCountForCoarseTimeOfDay:(long long)a0 currentTimeOfDay:(long long)a1;
+ (double)_smoothedCountForEightHourWindow:(long long)a0 currentTimeOfDay:(long long)a1;
+ (double)_smoothedCountForHourWindow:(long long)a0 currentTimeOfDay:(long long)a1;
+ (double)_smoothedCountForThirtyMinuteWindow:(long long)a0 currentTimeOfDay:(long long)a1;
+ (double)_smoothedCountForTimeOfDay:(long long)a0 currentTimeOfDay:(long long)a1;
+ (double)smoothedRatio:(double)a0 over:(double)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (double)_confirmRatio;
- (double)_timeOfDayBudgetStandardDeviation;
- (double)_totalFeedbackEvents;
- (void)_updateTimeOfDayBudgetStatisticsForNewTimeOfDayBudget:(double)a0;
- (id)initWithNumParameters:(int)a0;

@end
