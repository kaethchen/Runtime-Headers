@interface SLSBridgedGetSpacePermittedResizeDirectionsOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly) unsigned long long verticalIndex;
@property (readonly) unsigned long long horizontalIndex;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 verticalIndex:(unsigned long long)a1 horizontalIndex:(unsigned long long)a2;
- (id)invokeFallback;
- (id)makeResultWithSpaceResizeDirections:(unsigned long long)a0;

@end
