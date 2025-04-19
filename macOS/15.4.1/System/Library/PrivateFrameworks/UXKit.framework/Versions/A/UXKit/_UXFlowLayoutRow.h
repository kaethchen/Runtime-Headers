@class NSMutableArray, _UXFlowLayoutSection;

@interface _UXFlowLayoutRow : NSObject {
    BOOL _isValid;
    long long _verticalAlignement;
    long long _horizontalAlignement;
}

@property (nonatomic) _UXFlowLayoutSection *section;
@property (nonatomic) struct CGSize { double width; double height; } rowSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rowFrame;
@property (nonatomic) long long index;
@property (readonly, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL complete;
@property (nonatomic) BOOL fixedItemSize;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)addItem:(id)a0;
- (id)snapshot;
- (id)copyFromSection:(id)a0;
- (void)layoutRow;

@end
