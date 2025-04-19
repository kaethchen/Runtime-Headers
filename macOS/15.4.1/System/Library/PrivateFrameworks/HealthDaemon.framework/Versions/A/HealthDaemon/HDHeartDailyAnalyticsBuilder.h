@class NSCalendar, HDProfile, NSDateInterval, HDHeartDailyAnalytics, NSUserDefaults;

@interface HDHeartDailyAnalyticsBuilder : NSObject {
    HDProfile *_profile;
    HDHeartDailyAnalytics *_heartDailyAnalytics;
    NSUserDefaults *_heartRateNotificationsUserDefaults;
    NSUserDefaults *_heartRhythmUserDefaults;
    NSUserDefaults *_remoteFeatureAvailabilityUserDefaults;
    BOOL _isHealthDataSubmissionAllowed;
    NSCalendar *_calendar;
    NSDateInterval *_dateInterval;
    BOOL _areHealthNotificationsAuthorized;
}

- (void).cxx_destruct;
- (id)heartDailyAnalyticsWithError:(id *)a0;
- (id)initWithProfile:(id)a0 calendar:(id)a1 dateInterval:(id)a2 heartRateNotificationsUserDefaults:(id)a3 heartRhythmUserDefaults:(id)a4 remoteFeatureAvailabilityUserDefaults:(id)a5 areHealthNotificationsAuthorized:(BOOL)a6 isHealthDataSubmissionAllowed:(BOOL)a7;

@end
