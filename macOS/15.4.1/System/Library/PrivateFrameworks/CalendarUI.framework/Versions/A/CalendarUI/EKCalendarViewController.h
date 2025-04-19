@class EKCalendar;

@interface EKCalendarViewController : EKViewController

@property (retain, nonatomic) EKCalendar *calendar;

+ (id)emptyPlaceholderTitleString;
+ (id)newPlaceholderTitleString;

- (id)initWithSettings:(id)a0;
- (void)addNewSharees:(id)a0;
- (BOOL)calendarSupportsPublishing;
- (BOOL)calendarSupportsSharing;
- (double)defaultLabelWidth;
- (id)infoViewPublicURL;
- (BOOL)isCalendarFamilyCalendar;
- (BOOL)isCalendarMarkedImmutableSharees;
- (BOOL)isCalendarPubSub;
- (BOOL)isCalendarPublicallyShared;
- (BOOL)isCalendarPublished;
- (BOOL)isCalendarSharedToMe;
- (BOOL)isCalendarSubscribed;

@end
