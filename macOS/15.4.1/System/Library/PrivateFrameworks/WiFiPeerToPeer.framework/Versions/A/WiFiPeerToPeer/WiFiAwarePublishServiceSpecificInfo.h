@class NSData, NSString;

@interface WiFiAwarePublishServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *blob;
@property (copy, nonatomic) NSData *txtRecordData;
@property (copy, nonatomic) NSString *instanceName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)blobEquals:(id)a0;
- (BOOL)instanceNameEquals:(id)a0;
- (BOOL)txtRecordEquals:(id)a0;

@end
