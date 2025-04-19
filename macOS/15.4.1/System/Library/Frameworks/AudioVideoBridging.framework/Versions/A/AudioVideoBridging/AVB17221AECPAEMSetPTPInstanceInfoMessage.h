@interface AVB17221AECPAEMSetPTPInstanceInfoMessage : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) BOOL setPriority1;
@property (nonatomic) BOOL setPriority2;
@property (nonatomic) BOOL setDomainNumber;
@property (nonatomic) BOOL setInstanceEnabled;
@property (nonatomic) BOOL setExternalConfigurationEnabled;
@property (nonatomic) BOOL setSlaveOnly;
@property (nonatomic) unsigned char priority1;
@property (nonatomic) unsigned char priority2;
@property (nonatomic) unsigned char domainNumber;
@property (nonatomic) BOOL instanceEnabled;
@property (nonatomic) BOOL externalConfigurationEnabled;
@property (nonatomic) BOOL slaveOnly;

+ (id)keyPathsForValuesAffectingDomainNumber;
+ (id)keyPathsForValuesAffectingExternalConfigurationEnabled;
+ (id)keyPathsForValuesAffectingInstanceEnabled;
+ (id)keyPathsForValuesAffectingPriority1;
+ (id)keyPathsForValuesAffectingPriority2;
+ (id)keyPathsForValuesAffectingSetDomainNumber;
+ (id)keyPathsForValuesAffectingSetExternalConfigurationEnabled;
+ (id)keyPathsForValuesAffectingSetInstanceEnabled;
+ (id)keyPathsForValuesAffectingSetPriority1;
+ (id)keyPathsForValuesAffectingSetPriority2;
+ (id)keyPathsForValuesAffectingSetSlaveOnly;
+ (id)keyPathsForValuesAffectingSlaveOnly;

- (id)init;
- (BOOL)instanceEnabled;
- (BOOL)setDomainNumber;
- (BOOL)setExternalConfigurationEnabled;
- (unsigned char)domainNumber;
- (BOOL)externalConfigurationEnabled;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (unsigned char)priority1;
- (unsigned char)priority2;
- (void)setDomainNumber:(unsigned char)a0;
- (void)setExternalConfigurationEnabled:(BOOL)a0;
- (BOOL)setInstanceEnabled;
- (void)setInstanceEnabled:(BOOL)a0;
- (BOOL)setPriority1;
- (void)setPriority1:(unsigned char)a0;
- (BOOL)setPriority2;
- (void)setPriority2:(unsigned char)a0;
- (void)setSetDomainNumber:(BOOL)a0;
- (void)setSetExternalConfigurationEnabled:(BOOL)a0;
- (void)setSetInstanceEnabled:(BOOL)a0;
- (void)setSetPriority1:(BOOL)a0;
- (void)setSetPriority2:(BOOL)a0;
- (void)setSetSlaveOnly:(BOOL)a0;
- (BOOL)setSlaveOnly;
- (void)setSlaveOnly:(BOOL)a0;
- (BOOL)slaveOnly;

@end
