@class NSString, NSNumber, NSData;

@interface UARPTLVMeasuredPayload : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *payload4cc;
@property (copy) NSString *payloadLongname;
@property long long hashAlgorithm;
@property (retain) NSNumber *effectiveSecurityMode;
@property (retain) NSNumber *effectiveProductionMode;
@property (retain) NSNumber *isTrusted;
@property (retain) NSNumber *digestListSize;
@property (retain) NSData *payloadDigest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
