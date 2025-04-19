@class EKSource, NSString, NSArray, NSSet, NSMutableArray;

@interface CUIKGroupInfo : NSObject {
    NSMutableArray *_calendars;
    unsigned long long _customGroupType;
    NSString *_customTitle;
    NSString *_customTitleAtBeginningOfSentence;
    NSString *_typeTitle;
    NSString *_title;
    NSString *_titleForBeginningOfSentence;
}

@property (retain, nonatomic) EKSource *source;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showSelectAllButton;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *typeTitle;
@property (readonly, retain, nonatomic) NSArray *calendarInfos;
@property (readonly, copy, nonatomic) NSSet *calendarSet;
@property (readonly, copy, nonatomic) NSSet *selectedCalendarSet;
@property (readonly, nonatomic) unsigned long long numCalendars;
@property (readonly, nonatomic) unsigned long long numSelectableCalendars;
@property (readonly, nonatomic) unsigned long long numSelectedCalendars;
@property (readonly, nonatomic) BOOL showAddCalendarButton;
@property (readonly, nonatomic) BOOL showCalendarNameIfSolitary;
@property (readonly, nonatomic) int sortOrder;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (nonatomic) BOOL showAccountErrorActionButton;
@property (nonatomic) BOOL showAccountErrorActionButtonSpinner;
@property (retain, nonatomic) NSString *footer;
@property (nonatomic) unsigned long long accountError;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0;
- (void)removeCalendar:(id)a0;
- (void)selectAll;
- (id)calendarAtIndex:(unsigned long long)a0;
- (id)copyCalendars;
- (id)initWithCustomGroupType:(unsigned long long)a0;
- (void)insertCalendarInfo:(id)a0;
- (void)selectNone;
- (void)setCustomTitle:(id)a0 forBeginningOfSentence:(id)a1;
- (id)titleForBeginningOfSentence:(BOOL)a0;

@end
