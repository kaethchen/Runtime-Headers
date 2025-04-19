@class EKEvent, NSString, CalRecurrenceRule, NSDate, NSArray;

@interface CalEvent : CalCalendarItem

@property (retain, nonatomic) EKEvent *ekEvent;
@property (nonatomic) BOOL isAllDay;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) CalRecurrenceRule *recurrenceRule;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSArray *attendees;
@property (readonly, nonatomic) BOOL isDetached;
@property (readonly, copy, nonatomic) NSDate *occurrence;

+ (id)event;
+ (id)sortedAttendees:(id)a0;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)sortedAttendees;
- (long long)compareStartDate:(id)a0;
- (id)nextAlarmDate;
- (void)setEKEvent:(id)a0;

@end
