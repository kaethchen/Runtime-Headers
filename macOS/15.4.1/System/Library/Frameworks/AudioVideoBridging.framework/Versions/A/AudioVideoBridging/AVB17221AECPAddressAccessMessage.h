@class NSArray;

@interface AVB17221AECPAddressAccessMessage : AVB17221AECPMessage

@property (copy) NSArray *tlvs;

+ (id)responseMessage;
+ (id)commandMessage;
+ (id)errorForStatusCode:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
