@class NSString;

@interface AKAlignedItem : NSObject <NSInputAlignmentItem>

@property struct CGPoint { double x; double y; } pointInWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)representativeGuides;
- (void)alignmentControllerMoveItemByDistance:(struct CGPoint { double x0; double x1; })a0;

@end
