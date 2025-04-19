@class NSString;

@interface AVB17221AECPMilanVendorGetMilanInfoResponse : AVB17221AECPMilanVendorMessage

@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) BOOL redundancy;
@property (nonatomic) unsigned int certificationVersion;
@property (readonly, copy, nonatomic) NSString *certificationVersionString;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingCertificationVersion;
+ (id)keyPathsForValuesAffectingCertificationVersionString;
+ (id)keyPathsForValuesAffectingProtocolVersion;
+ (id)keyPathsForValuesAffectingRedundancy;

- (id)init;
- (unsigned int)protocolVersion;
- (void)setProtocolVersion:(unsigned int)a0;
- (unsigned int)certificationVersion;
- (id)certificationVersionString;
- (BOOL)redundancy;
- (void)setCertificationVersion:(unsigned int)a0;
- (void)setRedundancy:(BOOL)a0;

@end
