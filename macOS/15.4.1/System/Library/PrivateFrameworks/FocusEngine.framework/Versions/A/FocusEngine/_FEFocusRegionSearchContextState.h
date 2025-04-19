@class _FEFocusSystem;
@protocol _FEFocusRegionContainer;

@interface _FEFocusRegionSearchContextState : NSObject

@property (readonly, nonatomic) id<_FEFocusRegionContainer> regionContainer;
@property (readonly, nonatomic) _FEFocusSystem *regionContainerFocusSystem;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;

+ (id)stateWithRegionContainer:(id)a0 focusSystem:(id)a1 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (void).cxx_destruct;
- (id)initWithRegionContainer:(id)a0 focusSystem:(id)a1 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
