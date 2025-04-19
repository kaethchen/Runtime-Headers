@interface AVB17221AECPAEMStreamBackupMessage : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned long long backupTalkerEntityID0;
@property (nonatomic) unsigned short backupTalkerUniqueID0;
@property (nonatomic) unsigned long long backupTalkerEntityID1;
@property (nonatomic) unsigned short backupTalkerUniqueID1;
@property (nonatomic) unsigned long long backupTalkerEntityID2;
@property (nonatomic) unsigned short backupTalkerUniqueID2;
@property (nonatomic) unsigned long long backedupTalkerEntityID;
@property (nonatomic) unsigned short backedupTalkerUniqueID;

+ (id)keyPathsForValuesAffectingBackedupTalkerEntityID;
+ (id)keyPathsForValuesAffectingBackedupTalkerUniqueID;
+ (id)keyPathsForValuesAffectingBackupTalkerEntityID0;
+ (id)keyPathsForValuesAffectingBackupTalkerEntityID1;
+ (id)keyPathsForValuesAffectingBackupTalkerEntityID2;
+ (id)keyPathsForValuesAffectingBackupTalkerUniqueID0;
+ (id)keyPathsForValuesAffectingBackupTalkerUniqueID1;
+ (id)keyPathsForValuesAffectingBackupTalkerUniqueID2;

- (unsigned long long)backedupTalkerEntityID;
- (unsigned short)backedupTalkerUniqueID;
- (unsigned long long)backupTalkerEntityID0;
- (unsigned long long)backupTalkerEntityID1;
- (unsigned long long)backupTalkerEntityID2;
- (unsigned short)backupTalkerUniqueID0;
- (unsigned short)backupTalkerUniqueID1;
- (unsigned short)backupTalkerUniqueID2;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setBackedupTalkerEntityID:(unsigned long long)a0;
- (void)setBackedupTalkerUniqueID:(unsigned short)a0;
- (void)setBackupTalkerEntityID0:(unsigned long long)a0;
- (void)setBackupTalkerEntityID1:(unsigned long long)a0;
- (void)setBackupTalkerEntityID2:(unsigned long long)a0;
- (void)setBackupTalkerUniqueID0:(unsigned short)a0;
- (void)setBackupTalkerUniqueID1:(unsigned short)a0;
- (void)setBackupTalkerUniqueID2:(unsigned short)a0;

@end
