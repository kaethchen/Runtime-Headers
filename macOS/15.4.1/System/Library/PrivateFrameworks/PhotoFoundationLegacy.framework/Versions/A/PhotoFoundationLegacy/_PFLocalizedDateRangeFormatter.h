@class NSLocale;

@interface _PFLocalizedDateRangeFormatter : NSObject {
    NSLocale *_locale;
    struct UDateIntervalFormat { } *_dateIntervalFormat;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)stringForDateRangeFrom:(id)a0 to:(id)a1;

@end
