@class NSString;

@interface AXScribbleElement : NSObject

@property (retain, nonatomic) NSString *renderedText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } geometry;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 geometry:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
