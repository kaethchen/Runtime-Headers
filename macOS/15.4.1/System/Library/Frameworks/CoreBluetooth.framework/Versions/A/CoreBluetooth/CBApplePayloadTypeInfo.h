@interface CBApplePayloadTypeInfo : NSObject <CUXPCCodable>

@property (nonatomic) unsigned char applePayloadType;
@property (nonatomic) char rssiThreshold;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
