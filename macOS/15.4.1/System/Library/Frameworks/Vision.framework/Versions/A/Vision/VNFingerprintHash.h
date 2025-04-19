@class NSData, NSString;

@interface VNFingerprintHash : NSObject <NSCopying, NSSecureCoding> {
    NSData *_booleanBytesData_DO_NOT_DIRECTLY_ACCESS;
    NSData *_hashData_DO_NOT_DIRECTLY_ACCESS;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *booleanBytesData;
@property (readonly, copy) NSData *hashData;
@property (readonly, copy) NSString *hashString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBooleanBytes:(const char *)a0 length:(unsigned long long)a1;
- (id)initWithBooleanBytesData:(id)a0;
- (id)initWithHashData:(id)a0;

@end
