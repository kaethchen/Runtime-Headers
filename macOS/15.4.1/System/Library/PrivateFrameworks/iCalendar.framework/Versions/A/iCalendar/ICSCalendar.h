@class NSString, NSMutableDictionary, NSMutableSet, ICSDuration, ICSColor, NSMutableArray;

@interface ICSCalendar : ICSComponent {
    NSMutableSet *_keys;
    NSMutableDictionary *_masters;
    NSMutableDictionary *_occurrences;
    NSMutableDictionary *_timezones;
    NSMutableArray *_parsingErrors;
}

@property (retain, nonatomic) NSString *calscale;
@property (nonatomic) int method;
@property (retain, nonatomic) NSString *prodid;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) ICSDuration *x_apple_auto_refresh;
@property (retain, nonatomic) ICSColor *x_apple_calendar_color;
@property BOOL x_apple_ignore_on_restore;
@property (retain, nonatomic) NSString *x_wr_caldesc;
@property (retain, nonatomic) NSString *x_wr_calname;
@property (retain, nonatomic) NSString *x_wr_relcalid;
@property (retain, nonatomic) NSString *x_wr_timezone;
@property (retain, nonatomic) NSString *x_apple_language;
@property (retain, nonatomic) NSString *x_apple_region;
@property int x_calendarserver_access;

+ (id)name;
+ (id)ICSStringFromCalendarServerAccess:(int)a0;
+ (id)ICSStringFromMethod:(int)a0;
+ (int)calendarServerAccessFromICSString:(id)a0;
+ (id)calendarWithKnownTimeZones;
+ (long long)compareCalendarServerAccess:(int)a0 withAccess:(int)a1;
+ (id)defaultProdid;
+ (int)methodFromICSString:(id)a0;
+ (void)setDefaultProdid:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)setComponents:(id)a0;
- (void)_addTimeZonesInComponent:(id)a0 toSet:(id)a1;
- (void)_addComponent:(id)a0 withUIDGenerator:(id)a1;
- (id)timeZoneForKey:(id)a0;
- (void)_addTimeZonesInComponent:(id)a0 toDictionary:(id)a1;
- (id)_initWithVersionAndProdID:(BOOL)a0;
- (id)_timeZonesForComponents:(id)a0 options:(int)a1;
- (void)addComponent:(id)a0 withUIDGenerator:(id)a1;
- (void)addParsingError:(id)a0;
- (id)componentForKey:(id)a0;
- (id)componentKeys;
- (id)componentOccurrencesForKey:(id)a0;
- (void)fixComponent;
- (void)fixEntities;
- (void)fixPropertiesInheritance;
- (id)parsingErrors;
- (void)setComponents:(id)a0 options:(int)a1;
- (void)setComponents:(id)a0 timeZones:(BOOL)a1;
- (id)systemCalendarForDate:(id)a0 options:(int)a1;
- (id)systemDateForDate:(id)a0 options:(int)a1;
- (id)systemTimeZoneForDate:(id)a0;

@end
