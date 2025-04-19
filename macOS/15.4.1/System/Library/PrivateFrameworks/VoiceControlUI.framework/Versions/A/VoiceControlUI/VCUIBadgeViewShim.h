@interface VCUIBadgeViewShim : NSObject

@property (class, copy, nonatomic) id /* block */ rightBadgeViewForText;
@property (class, copy, nonatomic) id /* block */ rightBadgeSizeForDigits;
@property (class, copy, nonatomic) id /* block */ downBadgeViewForText;
@property (class, copy, nonatomic) id /* block */ downBadgeSizeForDigits;

@end
