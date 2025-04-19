@interface AVB17221AECPAEMAcquireEntityMessage : AVB17221AECPAEMMessage

@property (nonatomic) BOOL persistentAcquire;
@property (nonatomic) BOOL releaseAcquisition;
@property (nonatomic) unsigned long long acquiredControllerID;
@property (nonatomic) unsigned short descriptorType;
@property (nonatomic) unsigned short descriptorIndex;

+ (id)keyPathsForValuesAffectingAcquiredControllerID;
+ (id)keyPathsForValuesAffectingDescriptorIndex;
+ (id)keyPathsForValuesAffectingDescriptorType;
+ (id)keyPathsForValuesAffectingPersistentAcquire;
+ (id)keyPathsForValuesAffectingReleaseAcquisition;

- (unsigned short)descriptorType;
- (void)setDescriptorType:(unsigned short)a0;
- (unsigned short)descriptorIndex;
- (unsigned long long)acquiredControllerID;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (BOOL)persistentAcquire;
- (BOOL)releaseAcquisition;
- (void)setAcquiredControllerID:(unsigned long long)a0;
- (void)setDescriptorIndex:(unsigned short)a0;
- (void)setPersistentAcquire:(BOOL)a0;
- (void)setReleaseAcquisition:(BOOL)a0;

@end
