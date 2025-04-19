@interface SLSBridgedSpaceSetEdgeReservationOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly) unsigned long long edgeMask;
@property (readonly) double left;
@property (readonly) double right;
@property (readonly) double top;
@property (readonly) double bottom;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 edgeMask:(unsigned long long)a1 left:(double)a2 right:(double)a3 top:(double)a4 bottom:(double)a5;
- (void)invokeFallback;

@end
