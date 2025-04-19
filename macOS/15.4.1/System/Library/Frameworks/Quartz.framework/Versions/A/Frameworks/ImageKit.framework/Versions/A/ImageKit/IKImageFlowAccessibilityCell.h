@class IKImageFlowCell, IKImageFlowView;

@interface IKImageFlowAccessibilityCell : NSObject {
    IKImageFlowView *_flowView;
    unsigned long long _index;
    IKImageFlowCell *_cell;
    id _parent;
}

- (void)dealloc;
- (unsigned long long)index;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)cell;
- (id)flowView;
- (id)initWithCell:(id)a0 atIndex:(unsigned long long)a1 inFlowView:(id)a2 parent:(id)a3;

@end
