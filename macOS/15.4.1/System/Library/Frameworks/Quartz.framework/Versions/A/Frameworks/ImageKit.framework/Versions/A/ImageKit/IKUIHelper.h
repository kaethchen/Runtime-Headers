@class NSView, NSMutableArray;
@protocol IKUIHelper;

@interface IKUIHelper : NSObject {
    BOOL useAquaTheme;
    BOOL delegateImplementsDefaultRectForIdentifier;
    BOOL delegateImplementsControlSizeForIdentifier;
    NSMutableArray *_removableConstraints;
    NSMutableArray *_permanentConstraints;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } defaultRect;
}

@property NSView *dynamicView;
@property (nonatomic) id<IKUIHelper> delegate;
@property (nonatomic) BOOL debugLoggingEnabled;

- (id)addView:(id)a0;
- (id)addLine:(id)a0;
- (id)addTextField:(id)a0;
- (id)addSegmentedControl:(long long)a0 identifier:(id)a1;
- (id)addTextFieldOfClass:(Class)a0 identifier:(id)a1;
- (id)addButton:(id)a0 identifier:(id)a1;
- (id)addButtonOfClass:(Class)a0 label:(id)a1 identifier:(id)a2;
- (id)addCheckBox:(id)a0 identifier:(id)a1;
- (id)addCheckBoxOfClass:(Class)a0 label:(id)a1 identifier:(id)a2;
- (id)addComboBox:(id)a0;
- (id)addComboBoxOfClass:(Class)a0 identifier:(id)a1;
- (void)addConstraint:(id)a0 toView:(id)a1 allowRemoval:(BOOL)a2;
- (void)addConstraintsArray:(id)a0 toView:(id)a1 allowRemoval:(BOOL)a2;
- (void)addConstraintsWithVisualFormat:(id)a0 options:(unsigned long long)a1 views:(id)a2 toView:(id)a3 allowRemoval:(BOOL)a4;
- (id)addImageButton:(id)a0 identifier:(id)a1;
- (id)addImageButtonOfClass:(Class)a0 image:(id)a1 identifier:(id)a2;
- (id)addImageButtonOfClass:(Class)a0 imageName:(id)a1 identifier:(id)a2;
- (id)addImageButtonOfClass:(Class)a0 symbolName:(id)a1 identifier:(id)a2;
- (id)addImageView:(id)a0 identifier:(id)a1;
- (id)addImageViewOfClass:(Class)a0 imageName:(id)a1 identifier:(id)a2;
- (id)addLabel:(id)a0 identifier:(id)a1;
- (id)addPopup:(id)a0;
- (id)addPopupOfClass:(Class)a0 identifier:(id)a1;
- (id)addSegmentedControlOfClass:(Class)a0 count:(long long)a1 identifier:(id)a2;
- (id)addSliderOfClass:(Class)a0 identifier:(id)a1;
- (id)addSymbolButton:(id)a0 identifier:(id)a1;
- (id)addViewOfClass:(Class)a0 identifier:(id)a1;
- (unsigned long long)controlSizeForIdentifier:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultRectForIdentifier:(id)a0;
- (void)removeAllConstraints:(id)a0;
- (void)removeAllPermanentConstraints;
- (void)removeAllTemporaryConstraints;

@end
