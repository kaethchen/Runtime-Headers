@class NSString;

@interface ABDateFormatter : NSDateFormatter {
    NSString *_fullDateFormatString;
    NSString *_yearlessDateFormatString;
}

+ (BOOL)isDateYearless:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)stringForObjectValue:(id)a0;
- (void)awakeFromNib;
- (void)localeChanged:(id)a0;
- (void)ABDateFormatter_commonInit;
- (id)formatStringForComponents:(id)a0;
- (void)rebuildDateComponents;

@end
