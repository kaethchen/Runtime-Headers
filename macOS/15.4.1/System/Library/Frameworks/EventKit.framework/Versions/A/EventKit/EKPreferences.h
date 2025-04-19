@class NSArray, NSDictionary, CalPreferences;

@interface EKPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (nonatomic) double travelEngineThrottlePeriod;
@property (nonatomic) BOOL refiringReminderAlarmsEnabled;
@property (nonatomic) BOOL useShortReminderSnoozeInterval;
@property (nonatomic) BOOL useShortReminderRefireInterval;
@property (nonatomic) BOOL alwaysSetArrivedAndSettledForReminders;
@property (nonatomic) unsigned long long lastConfirmedSplashScreenVersion;
@property (readonly) BOOL bypassSplashScreen;
@property (nonatomic) BOOL showDeclinedEvents;
@property (nonatomic) BOOL showCompletedReminders;
@property (nonatomic) BOOL alertInviteeDeclines;
@property (readonly, nonatomic) NSArray *deselectedCalendarIdentifiers;
@property (readonly, nonatomic) NSArray *deselectedCalendarSyncHashes;
@property (readonly, nonatomic) NSArray *deselectedCalendarSyncIdentifiers;
@property (readonly, nonatomic) NSArray *customDeselectedCalendarSyncHashes;
@property (readonly, nonatomic) NSArray *customDeselectedCalendarSyncIdentifiers;
@property (copy, nonatomic) NSArray *unselectedCalendarIdentifiersForFocusMode;
@property (copy, nonatomic) NSArray *selectedCalendarIdentifiers;
@property (copy, nonatomic) NSDictionary *conferenceRoomTypeIdentifiersByMRU;
@property (copy, nonatomic) NSArray *collapsedSectionIdentifiers;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPreferences:(id)a0;
- (BOOL)_array:(id)a0 hasSameElementAsArray:(id)a1;
- (void)_setDeselectedCalendarIdentifiers:(id)a0;
- (void)_setDeselectedCalendarSyncHashes:(id)a0;
- (void)_setDeselectedCalendarSyncIdentifiers:(id)a0;
- (void)setDeselectedCalendars:(id)a0 reason:(id)a1;

@end
