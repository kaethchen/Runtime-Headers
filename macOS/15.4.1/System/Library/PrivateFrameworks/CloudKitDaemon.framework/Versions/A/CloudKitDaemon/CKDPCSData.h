@class NSString, NSData;
@protocol NSSecureCoding;

@interface CKDPCSData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *pcsKeyID;
@property (readonly, nonatomic) id<NSSecureCoding> itemID;
@property (nonatomic) struct _OpaquePCSShareProtection { } *pcs;
@property (copy, nonatomic) NSString *etag;
@property (copy, nonatomic) NSData *pcsData;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithPCSData:(id)a0;
- (BOOL)shouldEncodePCSData;

@end
