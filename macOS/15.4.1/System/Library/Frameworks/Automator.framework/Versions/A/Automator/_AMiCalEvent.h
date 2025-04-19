@class NSString, NSArray, NSDate;

@interface _AMiCalEvent : _AMiCalItem

@property (copy) NSString *objectDescription;
@property (copy) NSDate *startDate;
@property (copy) NSDate *endDate;
@property BOOL alldayEvent;
@property (copy) NSString *recurrence;
@property (readonly) long long sequence;
@property (readonly, copy) NSDate *stampDate;
@property (copy) NSArray *excludedDates;
@property int status;
@property (copy) NSString *summary;
@property (copy) NSString *location;
@property (readonly, copy) NSString *uid;
@property (copy) NSString *url;

- (id)attendees;
- (id)displayAlarms;
- (id)mailAlarms;
- (id)openFileAlarms;
- (id)soundAlarms;

@end
