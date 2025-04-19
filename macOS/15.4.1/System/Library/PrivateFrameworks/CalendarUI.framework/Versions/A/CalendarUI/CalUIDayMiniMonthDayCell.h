@class NSColor, NSAttributedString, NSDate;

@interface CalUIDayMiniMonthDayCell : NSTextFieldCell

@property (retain) NSDate *date;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property BOOL isHovered;
@property BOOL isActive;
@property BOOL isInPreviousMonth;
@property BOOL isInNextMonth;
@property BOOL weekNumbersEnabled;
@property long long weekRow;
@property (retain) NSAttributedString *weekNumberString;
@property (retain) id axParent;
@property (retain) NSColor *dayBackgroundColor;
@property BOOL alwaysDrawsBackground;
@property BOOL backgroundHasRoundedCorners;
@property BOOL backgroundIsCircle;
@property double backgroundCircleRadius;
@property double backgroundXOffset;
@property double backgroundYOffset;
@property BOOL backgroundSizeIsStatic;
@property struct CGSize { double width; double height; } backgroundSize;

+ (id)_localizedStringForNumber:(id)a0;
+ (id)_todayBorderGradient;
+ (id)_todayGradient;
+ (id)_todayInsetBorderGradient;

- (void).cxx_destruct;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)initTextCellWithDate:(id)a0 calendar:(id)a1 isActive:(BOOL)a2 font:(id)a3 textColor:(id)a4 alignment:(long long)a5;

@end
