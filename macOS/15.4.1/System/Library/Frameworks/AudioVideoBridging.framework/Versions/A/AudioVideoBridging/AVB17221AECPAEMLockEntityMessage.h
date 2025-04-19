@interface AVB17221AECPAEMLockEntityMessage : AVB17221AECPAEMMessage

@property (nonatomic) BOOL unlock;
@property (nonatomic) unsigned long long lockedControllerID;
@property (nonatomic) unsigned short descriptorType;
@property (nonatomic) unsigned short descriptorIndex;

+ (id)keyPathsForValuesAffectingDescriptorIndex;
+ (id)keyPathsForValuesAffectingDescriptorType;
+ (id)keyPathsForValuesAffectingLockedControllerID;
+ (id)keyPathsForValuesAffectingUnlock;

- (BOOL)unlock;
- (unsigned short)descriptorType;
- (void)setDescriptorType:(unsigned short)a0;
- (unsigned short)descriptorIndex;
- (unsigned long long)lockedControllerID;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setDescriptorIndex:(unsigned short)a0;
- (void)setLockedControllerID:(unsigned long long)a0;
- (void)setUnlock:(BOOL)a0;

@end
