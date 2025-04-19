@interface VKBaseTextSelectionRect : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly, nonatomic) long long writingDirection;
@property (readonly, nonatomic) BOOL containsStart;
@property (readonly, nonatomic) BOOL containsEnd;
@property (readonly, nonatomic) BOOL isVertical;

@end
