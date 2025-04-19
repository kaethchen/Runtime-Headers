@class NSData;

@interface CBServiceUUIDParamInfo : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSData *serviceUUID;
@property (copy, nonatomic) NSData *blobData;
@property (copy, nonatomic) NSData *maskData;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
