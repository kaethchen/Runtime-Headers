@class _UXFlowLayoutRow, _UXFlowLayoutSection;

@interface _UXFlowLayoutItem : NSObject

@property (nonatomic) _UXFlowLayoutSection *section;
@property (nonatomic) _UXFlowLayoutRow *rowObject;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } itemFrame;

- (id)copy;

@end
