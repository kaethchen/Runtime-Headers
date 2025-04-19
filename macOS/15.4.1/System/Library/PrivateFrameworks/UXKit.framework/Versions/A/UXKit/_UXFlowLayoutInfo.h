@class NSDictionary, NSMutableArray;

@interface _UXFlowLayoutInfo : NSObject {
    BOOL _useFloatingHeaderFooter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleBounds;
    struct CGSize { double width; double height; } _layoutSize;
    BOOL _isValid;
}

@property (readonly, nonatomic) NSMutableArray *sections;
@property (nonatomic) BOOL usesFloatingHeaderFooter;
@property (nonatomic) double dimension;
@property (nonatomic) BOOL horizontal;
@property (nonatomic) BOOL leftToRight;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) NSDictionary *rowAlignmentOptions;

- (void)dealloc;
- (id)copy;
- (id)init;
- (id)snapshot;
- (id)addSection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndexPath:(id)a0;
- (void)invalidate:(BOOL)a0;

@end
