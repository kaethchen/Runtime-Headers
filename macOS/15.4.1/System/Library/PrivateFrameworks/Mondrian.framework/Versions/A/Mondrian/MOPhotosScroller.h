@interface MOPhotosScroller : NSScroller

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

+ (BOOL)isCompatibleWithOverlayScrollers;

@end
