@interface SLSBridgedSpaceCanCreateTileOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly) struct CGSize { double width; double height; } minSize;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 minSize:(struct CGSize { double x0; double x1; })a1;
- (id)invokeFallback;
- (id)makeResultWithBoolValue:(BOOL)a0;

@end
