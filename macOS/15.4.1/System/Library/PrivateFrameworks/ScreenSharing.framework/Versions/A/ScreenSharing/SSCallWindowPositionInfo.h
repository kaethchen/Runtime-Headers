@interface SSCallWindowPositionInfo : NSObject

@property BOOL hasDodgeArea;
@property double roomOnLeft;
@property double roomOnRight;
@property BOOL moveRight;
@property BOOL scaleToShowAllOfFaceTimeWindow;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property struct CGSize { double width; double height; } maxSize;

- (id)init;
- (id)initWithWindowController:(id)a0;

@end
