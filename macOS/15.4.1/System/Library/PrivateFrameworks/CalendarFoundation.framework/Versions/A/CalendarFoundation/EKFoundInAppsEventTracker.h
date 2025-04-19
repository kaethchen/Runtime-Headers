@interface EKFoundInAppsEventTracker : NSObject

+ (void)trackPseudoEventDateChanged;
+ (void)trackPseudoEventDetailsOpened;
+ (void)trackPseudoEventInitialTimeToLeaveFired;
+ (void)trackPseudoEventsExpired:(int)a0;

@end
