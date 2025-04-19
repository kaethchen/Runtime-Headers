@class NSString;

@interface NSColorPanelFavoriteSwatch : NSCollectionViewItem <_NSItemFocusingCollectionViewItem> {
    struct CGPoint { double x; double y; } _mouseDownLocation;
}

@property (weak) id target;
@property SEL action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (id)accessibilityActionDescription:(id)a0;
- (void)refreshCollectionViewFocusState;
- (BOOL)_viewControllerSupports10_10Features;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityValueAttribute;
- (void)loadView;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)performClick:(id)a0;
- (void)setSelected:(BOOL)a0;

@end
