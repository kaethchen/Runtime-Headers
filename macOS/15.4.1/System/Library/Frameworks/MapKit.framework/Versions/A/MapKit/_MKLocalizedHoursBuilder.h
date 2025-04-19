@class NSTimeZone, NSString, NSArray, GEOBusinessHours, NSDate, GEOResultRefinementTime, NSColor;

@interface _MKLocalizedHoursBuilder : NSObject {
    BOOL _isClosedTodayAllDay;
    BOOL _isCurrentlyClosed;
    BOOL _isClosingSoon;
    BOOL _isOpeningSoon;
    BOOL _isPermanentlyClosed;
    BOOL _isTemporarilyClosed;
    BOOL _isOpenTodayAllDay;
    BOOL _isCurrentlyOpen;
    BOOL _isUsingConciseStyle;
    GEOResultRefinementTime *_openAt;
}

@property (nonatomic) unsigned long long geoMapItemOpeningHourOptions;
@property (nonatomic) unsigned long long localizedHoursStringOptions;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) GEOBusinessHours *operatingHours;
@property (retain, nonatomic) NSDate *compareDate;
@property (readonly, nonatomic) NSString *localizedOperatingHours;
@property (readonly, nonatomic) NSString *localizedOpenState;
@property (readonly, nonatomic) NSColor *hoursStateLabelColor;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSArray *AMPMSymbols;

+ (id)localizedHoursStringNormalHours;
+ (id)hoursDelimeter;
+ (id)localizedHoursDayRangeString:(id)a0;
+ (id)localizedHoursStringSpecialHours;
+ (id)testGetDayOfWeekFormatterFull;
+ (id)testGetDayOfWeekFormatterShort;
+ (id)testGetHoursFormatter;
+ (id)testGetMonthAndDayFormatter;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_findNextOperatingWeekday:(long long)a0;
- (id)_formatedOperatingHourString:(id)a0 timeZone:(id)a1 weekday:(long long)a2;
- (id)_formattedStringForHourRangesWithStartAndEndDates:(id)a0 timeZone:(id)a1;
- (BOOL)_isCurrentTimeSingular:(id)a0;
- (BOOL)_isOpenAtClosingSoon;
- (id)_localizedTimeStringFromDate:(id)a0 timezone:(id)a1;
- (void)_resetLocalizedBuilder:(BOOL)a0;
- (void)_resetLocalizedStrings:(BOOL)a0;
- (id)_updateLocalizedOperatingHoursString:(unsigned long long)a0;
- (void)_updateLocalizedString;
- (void)calculateWidthsForData:(id)a0;
- (id)concatenateStrings:(id)a0 joinedByString:(id)a1;
- (id)formatData:(id)a0;
- (id)initWithBusinessHours:(id)a0 timeZone:(id)a1 localizedHoursStringOptions:(unsigned long long)a2;
- (id)initWithBusinessHours:(id)a0 timeZone:(id)a1 localizedHoursStringOptions:(unsigned long long)a2 conciseStyle:(BOOL)a3 openAt:(id)a4;
- (id)initWithMapItem:(id)a0 localizedHoursStringOptions:(unsigned long long)a1;
- (id)initWithMapItem:(id)a0 localizedHoursStringOptions:(unsigned long long)a1 conciseStyle:(BOOL)a2 openAt:(id)a3;
- (id)initWithMapItemForMessageForBusiness:(id)a0 localizedHoursStringOptions:(unsigned long long)a1;
- (id)showClosingSoonHour:(id)a0 timeZone:(id)a1;
- (void)updateHoursLabelColor;
- (void)updateHoursLabelColorWithDefaultLabelColor:(id)a0;

@end
