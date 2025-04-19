@interface SLSBridgedWindowManagementOperationSpacersResult : SLSBridgedWindowManagementOperationResult

@property (readonly) unsigned long long verticalIndex;
@property (readonly) unsigned long long horizontalIndex;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVerticalIndex:(unsigned long long)a0 horizontalIndex:(unsigned long long)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
