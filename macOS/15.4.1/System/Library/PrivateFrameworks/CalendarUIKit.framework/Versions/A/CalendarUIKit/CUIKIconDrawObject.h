@class NSString, NSCalendar;

@interface CUIKIconDrawObject : NSObject

@property (readonly, copy, nonatomic) NSCalendar *calendar;
@property (readonly, copy, nonatomic) NSString *dayNumber;
@property (readonly, copy, nonatomic) NSString *monthName;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (readonly, nonatomic) double canvasScale;

- (void).cxx_destruct;
- (void)draw;
- (id)_iconWhiteColor;
- (id)_iconBlackColor;
- (id)_dayNumberFont;
- (void)_drawDayNumber;
- (void)_drawMonthName;
- (id)_monthNameFontOfSize:(double)a0;
- (id)_monthStringAttributesForText:(id)a0;
- (double)_roundSpecToActual:(double)a0;
- (double)horizontalStringAdjustment:(id)a0;
- (id)initWithCalendar:(id)a0 dayNumber:(id)a1 monthName:(id)a2 canvasSize:(struct CGSize { double x0; double x1; })a3 canvasScale:(double)a4;

@end
