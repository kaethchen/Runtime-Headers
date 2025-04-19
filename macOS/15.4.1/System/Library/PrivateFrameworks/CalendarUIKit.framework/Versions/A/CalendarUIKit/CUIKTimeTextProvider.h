@interface CUIKTimeTextProvider : NSObject

+ (id)timeAttributedTextWithDate:(id)a0 calendar:(id)a1 font:(id)a2 options:(long long)a3;
+ (id)_applyFont:(id)a0 toString:(id)a1 allowSmallCaps:(BOOL)a2;
+ (id)_dateFormatterWithCalendar:(id)a0 dropDesignator:(BOOL)a1 designatorRequiresWhitespace:(BOOL)a2 retainZeroMinutes:(BOOL)a3 dateHasZeroMinutes:(BOOL)a4 addDate:(BOOL)a5;
+ (id)_timeAttributedTextWithDate:(id)a0 calendar:(id)a1 droppingDesignator:(BOOL)a2 designatorRequiresWhitespace:(BOOL)a3 smallCapsAllowed:(BOOL)a4 retainZeroMinutes:(BOOL)a5 addDate:(BOOL)a6;
+ (BOOL)_use24HourFormatForLocale:(id)a0;
+ (void)force24HourFormatForUnitTests:(BOOL)a0 withLocale:(id)a1;
+ (void)resetForce24HourFormatForUnitTests;
+ (id)timeAttributedTextWithDate:(id)a0 calendar:(id)a1;

@end
