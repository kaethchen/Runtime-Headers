@interface CUIKORImageUtils : NSObject

+ (double)hideIconBreakpoint;
+ (id)_calendarColorDotImageForColor:(id)a0 baseSize:(double)a1 font:(id)a2;
+ (id)_calendarColorDotImageForColor:(id)a0 diameter:(double)a1;
+ (id)_calendarColorDotImageForColor:(id)a0 diameter:(double)a1 enabled:(BOOL)a2 adjustWhiteColor:(BOOL)a3;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0 scaledByFont:(id)a1;
+ (unsigned long long)_uniqueDotHashForColor:(id)a0 diameter:(double)a1;
+ (double)colorBarThickness;
+ (double)iconToTextPadding;
+ (double)occurrencePadding;
+ (id)scaledCalendarColorChooserDotImageForColor:(id)a0 font:(id)a1;
+ (id)scaledCalendarColorDotImageForColor:(id)a0 font:(id)a1;
+ (id)scaledCalendarColorDotImageForColor_SuggestedEvent:(id)a0 font:(id)a1;
+ (id)scaledCalendarInvitationDotForFont:(id)a0;

@end
