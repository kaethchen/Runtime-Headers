@interface SLSBridgedSpaceSetInterTileSpacingOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly) struct CGSize { double width; double height; } spacing;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 spacing:(struct CGSize { double x0; double x1; })a1;
- (void)invokeFallback;

@end
