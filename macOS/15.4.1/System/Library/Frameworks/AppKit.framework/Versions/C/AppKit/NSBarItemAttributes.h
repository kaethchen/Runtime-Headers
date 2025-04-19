@interface NSBarItemAttributes : NSObject

@property double reservedWidth;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property double alphaValue;
@property double zPosition;

- (id)description;

@end
