@class NSTimeZone, NSDateFormatter, NSLocale;

@interface PLDateRangeFormatter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _preset;
    NSLocale *_locale;
    BOOL _useLocalDates;
    NSTimeZone *_timeZone;
    BOOL _allowUseTime;
    BOOL _allowUseRelativeDayFormatting;
    BOOL _includeDayNumbers;
    BOOL _includeDayNumbersWhenMonthsDiffer;
    BOOL _useRelativeDayFormatting;
    BOOL _useShortMonths;
    BOOL _useShortDaysInRanges;
    BOOL _useTime;
    BOOL _yearOnly;
    BOOL _monthOnly;
    BOOL _timeOnly;
    BOOL _omitYear;
    BOOL _monthWithDelimiterAndYear;
    BOOL _monthWithYear;
    NSDateFormatter *_sameDayDateFormatter;
    NSDateFormatter *_sameDayNoYearDateFormatter;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    NSDateFormatter *_yearDateFormatter;
    NSDateFormatter *_monthDateFormatter;
    NSDateFormatter *_monthYearDateFormatter;
    NSDateFormatter *_relativeDateFormatter;
    struct UDateIntervalFormat { } *_monthDayIntervalFormat;
    struct UDateIntervalFormat { } *_monthDayNoYearIntervalFormat;
    struct UDateIntervalFormat { } *_differentMonthDayIntervalFormat;
    struct UDateIntervalFormat { } *_differentMonthDayNoYearIntervalFormat;
    struct UDateIntervalFormat { } *_dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat { } *_timeIntervalFormat;
    struct UDateIntervalFormat { } *_monthIntervalFormat;
    struct UDateIntervalFormat { } *_monthYearIntervalFormat;
    struct UDateIntervalFormat { } *_yearIntervalFormat;
}

@property (nonatomic) long long preset;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL useLocalDates;
@property (nonatomic) BOOL allowUseTime;
@property (nonatomic) BOOL allowUseRelativeDayFormatting;

+ (id)autoupdatingFormatterWithPreset:(long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)localTimeZone;
- (id)stringFromDate:(id)a0;
- (id)stringFromDate:(id)a0 toDate:(id)a1;
- (void)_resetFormatters;
- (id)initWithPreset:(long long)a0;
- (void)_currentLocaleDidChange:(id)a0;
- (id)_dayDifferentMonthsTemplate;
- (id)_dayOfTheWeekDateFormatter;
- (struct UDateIntervalFormat { } *)_dayOfTheWeekIntervalFormat;
- (id)_dayTemplate;
- (struct UDateIntervalFormat { } *)_differentMonthDayIntervalFormat;
- (struct UDateIntervalFormat { } *)_differentMonthDayNoYearIntervalFormat;
- (void)_handlePresetDidChange;
- (void)_handleUseLocalDatesDidChange;
- (id)_monthDateFormatter;
- (struct UDateIntervalFormat { } *)_monthDayIntervalFormat;
- (struct UDateIntervalFormat { } *)_monthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat { } *)_monthIntervalFormat;
- (id)_monthYearDateFormatter;
- (struct UDateIntervalFormat { } *)_monthYearIntervalFormat;
- (id)_relativeDateFormatter;
- (id)_sameDayDateFormatter;
- (id)_sameDayNoYearDateFormatter;
- (id)_sameMonthTemplate;
- (void)_significantTimeChange:(id)a0;
- (id)_stringFromDate:(id)a0 toDate:(id)a1 currentDate:(id)a2;
- (void)_systemTimeZoneDidChange:(id)a0;
- (struct UDateIntervalFormat { } *)_timeIntervalFormat;
- (id)_yearDateFormatter;
- (struct UDateIntervalFormat { } *)_yearIntervalFormat;
- (id)stringFromDate:(id)a0 toDate:(id)a1 currentDate:(id)a2;

@end
