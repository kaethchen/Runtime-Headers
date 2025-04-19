@class NSArray;

@interface AVB17221AECPAEMGetAVBInfoResponse : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned long long gPTPGrandmasterID;
@property (nonatomic) unsigned int propagationDelay;
@property (nonatomic) unsigned char gPTPDomainNumber;
@property (nonatomic) BOOL asCapable;
@property (nonatomic) BOOL gPTPEnabled;
@property (nonatomic) BOOL srpEnabled;
@property (nonatomic) BOOL avtpDown;
@property (nonatomic) BOOL avtpDownValid;
@property (copy, nonatomic) NSArray *msrpMappings;

+ (id)keyPathsForValuesAffectingAsCapable;
+ (id)keyPathsForValuesAffectingPropagationDelay;
+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingAvtpDown;
+ (id)keyPathsForValuesAffectingAvtpDownValid;
+ (id)keyPathsForValuesAffectingGPTPDomainNumber;
+ (id)keyPathsForValuesAffectingGPTPEnabled;
+ (id)keyPathsForValuesAffectingGPTPGrandmasterID;
+ (id)keyPathsForValuesAffectingMsrpMappings;
+ (id)keyPathsForValuesAffectingSrpEnabled;

- (id)init;
- (BOOL)asCapable;
- (unsigned int)propagationDelay;
- (void)setAsCapable:(BOOL)a0;
- (void)setPropagationDelay:(unsigned int)a0;
- (void)setGPTPEnabled:(BOOL)a0;
- (BOOL)avtpDown;
- (BOOL)avtpDownValid;
- (unsigned char)gPTPDomainNumber;
- (BOOL)gPTPEnabled;
- (unsigned long long)gPTPGrandmasterID;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setAvtpDown:(BOOL)a0;
- (void)setAvtpDownValid:(BOOL)a0;
- (void)setGPTPDomainNumber:(unsigned char)a0;
- (void)setGPTPGrandmasterID:(unsigned long long)a0;
- (void)setSrpEnabled:(BOOL)a0;
- (BOOL)srpEnabled;

@end
