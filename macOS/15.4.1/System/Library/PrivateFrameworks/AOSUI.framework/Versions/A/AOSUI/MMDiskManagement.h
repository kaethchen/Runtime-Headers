@interface MMDiskManagement : NSObject

+ (BOOL)containsRecoveryPartitionAndVersion:(id *)a0 error:(id *)a1;
+ (BOOL)hasCorrectRecoveryPartition:(id)a0;
+ (BOOL)hasRecoveryPartition:(id *)a0;
+ (BOOL)recoveryPartitionNeedsUpdate:(id)a0;
+ (BOOL)systemHasTRB;

@end
