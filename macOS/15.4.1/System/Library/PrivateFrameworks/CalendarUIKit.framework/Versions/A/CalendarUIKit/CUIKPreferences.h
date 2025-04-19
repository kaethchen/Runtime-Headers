@class NSArray, NSString, CalPreferences, NSDate, NSNumber;

@interface CUIKPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (nonatomic) BOOL showWeekNumbers;
@property (nonatomic) BOOL weekViewStartsOnToday;
@property (nonatomic) BOOL showListView;
@property (nonatomic) long long numDaysToShow;
@property (nonatomic) BOOL showMonthDividedListView;
@property (nonatomic) BOOL viewedTimeZoneAutomatic;
@property (nonatomic) BOOL requestSyncOnApplicationLaunch;
@property (nonatomic) BOOL drawDebugViewColors;
@property (nonatomic) BOOL immediateAlarmCreation;
@property (nonatomic) BOOL showExperimentalUI;
@property (nonatomic) BOOL disableContinuity;
@property (nonatomic) BOOL swipeToDeleteEnabled;
@property (nonatomic) BOOL largeListViewDisclosingEventDetails;
@property (nonatomic) BOOL showWindowDebugButton;
@property (nonatomic, getter=isShortResumeToTodayTimeout) BOOL shortResumeToTodayTimeout;
@property (nonatomic) BOOL hideInlineDayViewInEventDetails;
@property (nonatomic) BOOL disableTodayPushes;
@property (nonatomic) BOOL enableAvatars;
@property (nonatomic) BOOL enableMultiwindowAsserts;
@property (nonatomic) unsigned long long promptForCommentWhenDeclining;
@property (retain, nonatomic) NSArray *calendarUUIDsExcludedFromNotifications;
@property (retain, nonatomic) NSNumber *weekStart;
@property (retain, nonatomic) NSNumber *lastSuspendTime;
@property (retain, nonatomic) NSNumber *lastViewedDate;
@property (retain, nonatomic) NSNumber *lastViewMode;
@property (retain, nonatomic) NSNumber *lastSidebarMode;
@property (retain, nonatomic) NSNumber *dayViewHourScale;
@property (retain, nonatomic) NSNumber *weekViewHourScale;
@property (nonatomic) unsigned long long monthViewScaleSize;
@property (nonatomic) unsigned long long monthViewEventScaleSize;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSString *overlayCalendarID;
@property (retain, nonatomic) NSDate *simulatedCurrentDate;
@property (retain, nonatomic) NSNumber *locationSearchResultLimit;
@property (nonatomic) BOOL eventAutocompleteEnabled;
@property (retain, nonatomic) NSNumber *dayViewFirstVisibleSecond;
@property (readonly, nonatomic) NSArray *deselectedCalendarSyncHashes;
@property (nonatomic) BOOL overrideLocaleWeekends;
@property (retain, nonatomic) NSString *lastViewedOccurrenceUID;
@property (retain, nonatomic) NSDate *lastViewedOccurrenceDate;
@property (nonatomic) BOOL scanForDiscoveredVirtualConferences;
@property (nonatomic) BOOL displayedSubscribedCalendarSpamDetectionPrivacyNotice;
@property (nonatomic) BOOL allowSubscribedCalendarSpamDetection;
@property (nonatomic) BOOL perSectionShowAllHideAllButtonSpecifier;
@property (nonatomic) BOOL showDeclinedAndCancelledEventsInWidgets;
@property (nonatomic) BOOL debugLocationSearchResults;
@property (nonatomic) BOOL forceAllowClearComments;

+ (id)sharedPreferences;

- (id)init;
- (void).cxx_destruct;
- (void)resetSubscribedCalendarSpamDetectionToNull;

@end
