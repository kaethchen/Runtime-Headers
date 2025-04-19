@interface BAASupport : NSObject

+ (void)initialize;
+ (void)setDelegate:(id)a0;
+ (int)prepare;
+ (int)getCertificateExpirationDate:(double *)a0;
+ (int)getCertificates:(id *)a0;
+ (int)issueNewCertificate;
+ (void)setBlessedUser:(unsigned int)a0 keybagUUID:(unsigned char[16])a1;
+ (int)prepareLazily;
+ (int)prepareLazily:(BOOL)a0;

@end
