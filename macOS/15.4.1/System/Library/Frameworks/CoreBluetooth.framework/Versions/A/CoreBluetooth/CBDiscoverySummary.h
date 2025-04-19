@interface CBDiscoverySummary : NSObject <CUXPCCodable>

@property (nonatomic) double scanTime;

- (id)description;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
