@interface AKRectAnnotation : AKRectangularShapeAnnotation

@property double cornerRadius;

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)displayName;
- (id)keysForValuesToObserveForUndo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;
- (id)keysForValuesToObserveForRedrawing;

@end
