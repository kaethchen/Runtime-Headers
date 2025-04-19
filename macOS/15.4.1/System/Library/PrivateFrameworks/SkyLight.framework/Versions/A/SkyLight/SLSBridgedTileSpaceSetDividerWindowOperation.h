@interface SLSBridgedTileSpaceSetDividerWindowOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly) unsigned long long direction;
@property (readonly) unsigned int windowID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 direction:(unsigned long long)a1 windowID:(unsigned int)a2;
- (id)invokeFallback;
- (id)makeResultWithVerticalIndex:(unsigned long long)a0 horizontalIndex:(unsigned long long)a1;

@end
