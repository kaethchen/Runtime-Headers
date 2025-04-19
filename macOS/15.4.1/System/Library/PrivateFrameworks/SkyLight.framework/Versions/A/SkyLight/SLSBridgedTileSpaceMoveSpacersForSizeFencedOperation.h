@interface SLSBridgedTileSpaceMoveSpacersForSizeFencedOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long tileSpaceID;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) unsigned int fencePort;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTileSpaceID:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 fencePort:(unsigned int)a2;
- (void)invokeFallback;

@end
