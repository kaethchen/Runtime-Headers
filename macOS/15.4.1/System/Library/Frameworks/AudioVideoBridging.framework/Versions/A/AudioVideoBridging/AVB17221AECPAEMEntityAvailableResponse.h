@interface AVB17221AECPAEMEntityAvailableResponse : AVB17221AECPAEMMessage

@property (nonatomic) BOOL entityAcquired;
@property (nonatomic) BOOL entityLocked;
@property (nonatomic) BOOL subentityAcquired;
@property (nonatomic) BOOL subentityLocked;
@property (nonatomic) unsigned long long acquiredControllerID;
@property (nonatomic) unsigned long long lockedControllerID;
@property (readonly, nonatomic) BOOL messageIs2013Format;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingAcquiredControllerID;
+ (id)keyPathsForValuesAffectingEntityAcquired;
+ (id)keyPathsForValuesAffectingEntityLocked;
+ (id)keyPathsForValuesAffectingLockedControllerID;
+ (id)keyPathsForValuesAffectingMessageIs2013Format;
+ (id)keyPathsForValuesAffectingSubentityAcquired;
+ (id)keyPathsForValuesAffectingSubentityLocked;

- (id)init;
- (BOOL)subentityLocked;
- (unsigned long long)acquiredControllerID;
- (BOOL)entityAcquired;
- (BOOL)entityLocked;
- (unsigned long long)lockedControllerID;
- (BOOL)messageIs2013Format;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (unsigned long long)minimumReceivedCommandSpecificLength;
- (void)setAcquiredControllerID:(unsigned long long)a0;
- (void)setEntityAcquired:(BOOL)a0;
- (void)setEntityLocked:(BOOL)a0;
- (void)setLockedControllerID:(unsigned long long)a0;
- (void)setSubentityAcquired:(BOOL)a0;
- (void)setSubentityLocked:(BOOL)a0;
- (BOOL)subentityAcquired;

@end
