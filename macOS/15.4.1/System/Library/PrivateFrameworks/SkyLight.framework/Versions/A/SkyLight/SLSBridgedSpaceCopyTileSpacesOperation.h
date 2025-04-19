@interface SLSBridgedSpaceCopyTileSpacesOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0;
- (id)invokeFallback;
- (id)makeResultWithNumbers:(id)a0;

@end
