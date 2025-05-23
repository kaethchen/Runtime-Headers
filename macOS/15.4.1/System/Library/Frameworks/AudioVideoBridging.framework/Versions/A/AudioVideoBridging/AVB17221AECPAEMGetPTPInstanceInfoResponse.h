@interface AVB17221AECPAEMGetPTPInstanceInfoResponse : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned char clockClass;
@property (nonatomic) unsigned char clockAccuracy;
@property (nonatomic) unsigned short offsetScaledLogVariance;
@property (nonatomic) unsigned char priority1;
@property (nonatomic) unsigned char priority2;
@property (nonatomic) unsigned char domainNumber;
@property (nonatomic) unsigned char timeSource;
@property (nonatomic) short currentUTCOffset;
@property (nonatomic) BOOL instanceEnabled;
@property (nonatomic) BOOL externalConfigurationEnabled;
@property (nonatomic) BOOL slaveOnly;
@property (nonatomic) BOOL ptpTimescale;
@property (nonatomic) BOOL frequencyTraceable;
@property (nonatomic) BOOL timeTraceable;
@property (nonatomic) BOOL leap61;
@property (nonatomic) BOOL leap59;
@property (nonatomic) BOOL currentUTCOffsetValid;
@property (nonatomic) unsigned long long grandmasterClockIdentity;
@property (nonatomic) unsigned char grandmasterClockClass;
@property (nonatomic) unsigned char grandmasterClockAccuracy;
@property (nonatomic) unsigned short grandmasterOffsetScaledLogVariance;
@property (nonatomic) unsigned char grandmasterPriority1;
@property (nonatomic) unsigned char grandmasterPriority2;
@property (nonatomic) unsigned char grandmasterDomainNumber;
@property (nonatomic) unsigned char grandmasterTimeSource;
@property (nonatomic) short grandmasterCurrentUTCOffset;
@property (nonatomic) BOOL grandmasterCurrentUTCOffsetValid;
@property (nonatomic) BOOL grandmasterLeap59;
@property (nonatomic) BOOL grandmasterLeap61;
@property (nonatomic) BOOL grandmasterTimeTraceable;
@property (nonatomic) BOOL grandmasterFrequencyTraceable;
@property (nonatomic) BOOL grandmasterPTPTimescale;

+ (id)keyPathsForValuesAffectingClockAccuracy;
+ (id)keyPathsForValuesAffectingClockClass;
+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingCurrentUTCOffset;
+ (id)keyPathsForValuesAffectingCurrentUTCOffsetValid;
+ (id)keyPathsForValuesAffectingDomainNumber;
+ (id)keyPathsForValuesAffectingExternalConfigurationEnabled;
+ (id)keyPathsForValuesAffectingFrequencyTraceable;
+ (id)keyPathsForValuesAffectingGrandmasterClockAccuracy;
+ (id)keyPathsForValuesAffectingGrandmasterClockClass;
+ (id)keyPathsForValuesAffectingGrandmasterClockIdentity;
+ (id)keyPathsForValuesAffectingGrandmasterCurrentUTCOffset;
+ (id)keyPathsForValuesAffectingGrandmasterCurrentUTCOffsetValid;
+ (id)keyPathsForValuesAffectingGrandmasterDomainNumber;
+ (id)keyPathsForValuesAffectingGrandmasterFrequencyTraceable;
+ (id)keyPathsForValuesAffectingGrandmasterLeap59;
+ (id)keyPathsForValuesAffectingGrandmasterLeap61;
+ (id)keyPathsForValuesAffectingGrandmasterOffsetScaledLogVariance;
+ (id)keyPathsForValuesAffectingGrandmasterPTPTimescale;
+ (id)keyPathsForValuesAffectingGrandmasterPriority1;
+ (id)keyPathsForValuesAffectingGrandmasterPriority2;
+ (id)keyPathsForValuesAffectingGrandmasterTimeSource;
+ (id)keyPathsForValuesAffectingGrandmasterTimeTraceable;
+ (id)keyPathsForValuesAffectingInstanceEnabled;
+ (id)keyPathsForValuesAffectingLeap59;
+ (id)keyPathsForValuesAffectingLeap61;
+ (id)keyPathsForValuesAffectingOffsetScaledLogVariance;
+ (id)keyPathsForValuesAffectingPriority1;
+ (id)keyPathsForValuesAffectingPriority2;
+ (id)keyPathsForValuesAffectingPtpTimescale;
+ (id)keyPathsForValuesAffectingSlaveOnly;
+ (id)keyPathsForValuesAffectingTimeSource;
+ (id)keyPathsForValuesAffectingTimeTraceable;

- (id)init;
- (unsigned char)clockAccuracy;
- (unsigned char)clockClass;
- (void)setClockAccuracy:(unsigned char)a0;
- (void)setClockClass:(unsigned char)a0;
- (unsigned char)timeSource;
- (BOOL)instanceEnabled;
- (void)setGrandmasterCurrentUTCOffset:(short)a0;
- (short)currentUTCOffset;
- (BOOL)currentUTCOffsetValid;
- (unsigned char)domainNumber;
- (BOOL)externalConfigurationEnabled;
- (BOOL)frequencyTraceable;
- (unsigned char)grandmasterClockAccuracy;
- (unsigned char)grandmasterClockClass;
- (unsigned long long)grandmasterClockIdentity;
- (short)grandmasterCurrentUTCOffset;
- (BOOL)grandmasterCurrentUTCOffsetValid;
- (unsigned char)grandmasterDomainNumber;
- (BOOL)grandmasterFrequencyTraceable;
- (BOOL)grandmasterLeap59;
- (BOOL)grandmasterLeap61;
- (unsigned short)grandmasterOffsetScaledLogVariance;
- (BOOL)grandmasterPTPTimescale;
- (unsigned char)grandmasterPriority1;
- (unsigned char)grandmasterPriority2;
- (unsigned char)grandmasterTimeSource;
- (BOOL)grandmasterTimeTraceable;
- (BOOL)leap59;
- (BOOL)leap61;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (unsigned short)offsetScaledLogVariance;
- (unsigned char)priority1;
- (unsigned char)priority2;
- (BOOL)ptpTimescale;
- (void)setCurrentUTCOffset:(short)a0;
- (void)setCurrentUTCOffsetValid:(BOOL)a0;
- (void)setDomainNumber:(unsigned char)a0;
- (void)setExternalConfigurationEnabled:(BOOL)a0;
- (void)setFrequencyTraceable:(BOOL)a0;
- (void)setGrandmasterClockAccuracy:(unsigned char)a0;
- (void)setGrandmasterClockClass:(unsigned char)a0;
- (void)setGrandmasterClockIdentity:(unsigned long long)a0;
- (void)setGrandmasterCurrentUTCOffsetValid:(BOOL)a0;
- (void)setGrandmasterDomainNumber:(unsigned char)a0;
- (void)setGrandmasterFrequencyTraceable:(BOOL)a0;
- (void)setGrandmasterLeap59:(BOOL)a0;
- (void)setGrandmasterLeap61:(BOOL)a0;
- (void)setGrandmasterOffsetScaledLogVariance:(unsigned short)a0;
- (void)setGrandmasterPTPTimescale:(BOOL)a0;
- (void)setGrandmasterPriority1:(unsigned char)a0;
- (void)setGrandmasterPriority2:(unsigned char)a0;
- (void)setGrandmasterTimeSource:(unsigned char)a0;
- (void)setGrandmasterTimeTraceable:(BOOL)a0;
- (void)setInstanceEnabled:(BOOL)a0;
- (void)setLeap59:(BOOL)a0;
- (void)setLeap61:(BOOL)a0;
- (void)setOffsetScaledLogVariance:(unsigned short)a0;
- (void)setPriority1:(unsigned char)a0;
- (void)setPriority2:(unsigned char)a0;
- (void)setPtpTimescale:(BOOL)a0;
- (void)setSlaveOnly:(BOOL)a0;
- (void)setTimeSource:(unsigned char)a0;
- (void)setTimeTraceable:(BOOL)a0;
- (BOOL)slaveOnly;
- (BOOL)timeTraceable;

@end
