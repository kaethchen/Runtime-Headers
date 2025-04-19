@interface FI_TDateFormatter : NSObject

+ (id)mediumDateTime:(id)a0;
+ (id)mediumDateOnly:(id)a0;
+ (id)fileNameDateTime:(id)a0;
+ (id)fileNameTime:(id)a0;
+ (id)fullDateOnly:(id)a0;
+ (id)fullDateOnly:(id)a0 relative:(BOOL)a1;
+ (id)fullDateOnlyFormatter:(BOOL)a0;
+ (id)fullDateTime:(id)a0;
+ (id)fullDateTime:(id)a0 relative:(BOOL)a1;
+ (id)fullDateTimeFormatter:(BOOL)a0;
+ (void)initDateFormatter;
+ (id)longDateTime:(id)a0;
+ (id)longDateTime:(id)a0 relative:(BOOL)a1;
+ (id)longDateTimeFormatter:(BOOL)a0;
+ (id)mediumDateOnly:(id)a0 relative:(BOOL)a1;
+ (id)mediumDateOnlyFormatter:(BOOL)a0;
+ (id)mediumDateTime:(id)a0 relative:(BOOL)a1;
+ (id)mediumDateTimeFormatter:(BOOL)a0;
+ (id)relativeFullDateOnly:(id)a0;
+ (id)relativeFullDateTime:(id)a0;
+ (id)relativeLongDateTime:(id)a0;
+ (id)relativeMediumDateOnly:(id)a0;
+ (id)relativeMediumDateTime:(id)a0;
+ (id)relativeShortDateOnly:(id)a0;
+ (id)relativeShortDateTime:(id)a0;
+ (id)shortDateOnly:(id)a0;
+ (id)shortDateOnly:(id)a0 relative:(BOOL)a1;
+ (id)shortDateOnlyFormatter:(BOOL)a0;
+ (id)shortDateTime:(id)a0;
+ (id)shortDateTime:(id)a0 relative:(BOOL)a1;
+ (id)shortDateTimeFormatter:(BOOL)a0;
+ (id)timeOnly:(id)a0;
+ (id)timeOnlyFormatter;

@end
