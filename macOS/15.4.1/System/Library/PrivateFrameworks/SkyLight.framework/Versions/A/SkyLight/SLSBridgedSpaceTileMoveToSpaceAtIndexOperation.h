@interface SLSBridgedSpaceTileMoveToSpaceAtIndexOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long tileID;
@property (readonly) unsigned long long parentID;
@property (readonly) unsigned long long index;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTileID:(unsigned long long)a0 parentID:(unsigned long long)a1 index:(unsigned long long)a2;
- (void)invokeFallback;

@end
