@class PLLazyObject, NSLocale;

@interface PLDateRangeTitleGenerator : NSObject {
    PLLazyObject *_lazyRecentDateRangeFormatter;
    PLLazyObject *_lazyDateRangeFormatter;
    PLLazyObject *_lazyYearlessDateRangeFormatter;
    PLLazyObject *_lazyMonthYearWithDelimiterDateRangeFormatter;
    PLLazyObject *_lazyShortMonthYearWithDelimiterDateRangeFormatter;
    PLLazyObject *_lazyShortMonthYearDateRangeFormatter;
    PLLazyObject *_lazyYearDateRangeFormatter;
    NSLocale *_locale;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 type:(unsigned short)a4 options:(unsigned long long)a5;
- (id)dateRangeFormatter;
- (id)dateRangeFormatterForCategory:(unsigned short)a0 kind:(unsigned short)a1 type:(unsigned short)a2 options:(unsigned long long)a3;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 type:(unsigned short)a4;
- (id)monthYearWithDelimiterDateRangeFormatter;
- (id)newDateRangeFormatter;
- (id)newMonthYearWithDelimiterDateRangeFormatter;
- (id)newRecentDateRangeFormatter;
- (id)newShortMonthYearDateRangeFormatter;
- (id)newShortMonthYearWithDelimiterDateRangeFormatter;
- (id)newYearDateRangeFormatter;
- (id)newYearlessDateRangeFormatter;
- (id)recentDateRangeFormatter;
- (id)shortMonthYearDateRangeFormatter;
- (id)shortMonthYearWithDelimiterDateRangeFormatter;
- (id)yearDateRangeFormatter;
- (id)yearlessDateRangeFormatter;

@end
