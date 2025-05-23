@interface CBDeviceRequest : NSObject <CUXPCCodable>

@property (nonatomic) unsigned int requestFlags;
@property (nonatomic) double timeoutSeconds;

- (id)description;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
