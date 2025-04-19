@interface SLSBridgedSpaceClientDrivenMoveSpacersToPointOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long drivingSpaceID;
@property (readonly) unsigned long long verticalIndex;
@property (readonly) unsigned long long horizontalIndex;
@property (readonly) struct CGPoint { double x; double y; } point;
@property (readonly) unsigned long long options;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDrivingSpaceID:(unsigned long long)a0 verticalIndex:(unsigned long long)a1 horizontalIndex:(unsigned long long)a2 point:(struct CGPoint { double x0; double x1; })a3 options:(unsigned long long)a4;
- (void)invokeFallback;

@end
