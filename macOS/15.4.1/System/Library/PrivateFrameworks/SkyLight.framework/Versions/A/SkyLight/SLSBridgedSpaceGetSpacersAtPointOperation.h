@interface SLSBridgedSpaceGetSpacersAtPointOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly) struct CGPoint { double x; double y; } point;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (id)invokeFallback;
- (id)makeResultWithVerticalIndex:(unsigned long long)a0 horizontalIndex:(unsigned long long)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
