@class NSNumber, NSData;

@interface MTRTLSCertificateManagementClusterTLSCertStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *caid;
@property (copy, nonatomic) NSData *certificate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
