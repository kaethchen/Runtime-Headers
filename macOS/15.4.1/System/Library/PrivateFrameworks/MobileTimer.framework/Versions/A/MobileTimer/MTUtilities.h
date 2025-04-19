@interface MTUtilities : NSObject

+ (id)dayAndTimeZoneOffsetStringFromDate:(id)a0 withTimeZoneOffset:(long long)a1 timeZoneAbbreviation:(id)a2 spaceBeforeTimeDesignator:(BOOL)a3 hoursOnly:(BOOL)a4 numericOnly:(BOOL)a5;
+ (id)mtCityFromWorldClockCity:(id)a0;
+ (BOOL)mtSBUIIsSystemApertureEnabled;
+ (id)widgetOverrideDate;
+ (id)widgetURL;

@end
