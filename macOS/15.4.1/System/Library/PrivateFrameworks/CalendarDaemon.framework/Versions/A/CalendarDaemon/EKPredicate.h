@class NSTimeZone, NSArray, NSString, NSDictionary, NSDate, NSMutableDictionary;

@interface EKPredicate : CADPredicate <NSSecureCoding> {
    NSString *_uuid;
    NSTimeZone *_timeZone;
    NSDictionary *_databaseToCalendarRowIDs;
    NSMutableDictionary *_databaseToRestrictedCalendarRowIDs;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *calendars;
@property (retain, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)predicateFormat;
- (id)initWithCalendars:(id)a0;
- (id)calendarRowIDsForDatabaseID:(int)a0;
- (void)createCalendarMaps;
- (id)databasesToQuery;
- (id)restrictedCalendarRowIDsForDatabaseID:(int)a0;
- (void)setRestrictedCalendarRowIDs:(id)a0 forDatabaseID:(int)a1;

@end
