@class NSColor, AKAnnotation, NSString;

@interface AKNoteAnnotation : AKAnnotation <AKParentAnnotationProtocol, AKRectangularAnnotationProtocol, AKFilledAnnotationProtocol>

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectangle;
@property (retain) NSColor *fillColor;
@property (weak) AKAnnotation *childAnnotation;
@property (copy) NSString *contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)a0;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)displayName;
- (void)translateBy:(struct CGPoint { double x0; double x1; })a0;
- (id)keysForValuesToObserveForUndo;
- (void)flattenModelExifOrientation:(long long)a0 withModelSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;
- (id)keysForValuesToObserveForRedrawing;

@end
