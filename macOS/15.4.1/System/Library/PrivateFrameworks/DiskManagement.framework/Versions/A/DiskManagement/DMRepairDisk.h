@interface DMRepairDisk : NSObject {
    id _instPriv;
}

@property BOOL kextcacheEnabled;

- (void)dealloc;
- (id)init;
- (id)initWithManager:(id)a0;
- (int)beginPartitionMapVerifyForDisk:(struct __DADisk { } *)a0;
- (int)beginPartitionMapRepairForDisk:(struct __DADisk { } *)a0;
- (int)beginPartitionMapVerifyOrRepairForDisk:(struct __DADisk { } *)a0 repair:(BOOL)a1;
- (int)beginRepairEFISystemPartition:(struct __DADisk { } *)a0 mode:(unsigned int)a1;
- (int)beginResetUserPermissionsForDisk:(struct __DADisk { } *)a0 forUID:(long long)a1 level:(long long)a2;
- (int)beginStoragesystemFilesystemRepairForDisk:(struct __DADisk { } *)a0;
- (int)beginStoragesystemFilesystemVerifyForDisk:(struct __DADisk { } *)a0;
- (int)beginStoragesystemFilesystemVerifyOrRepairForDisk:(struct __DADisk { } *)a0 repair:(BOOL)a1;
- (BOOL)canRepairPartitionMapForDisk:(struct __DADisk { } *)a0 error:(int *)a1;
- (BOOL)canRepairStoragesystemFilesystemForDisk:(struct __DADisk { } *)a0 error:(int *)a1;
- (BOOL)canVerifyPartitionMapForDisk:(struct __DADisk { } *)a0 error:(int *)a1;
- (BOOL)canVerifyStoragesystemFilesystemForDisk:(struct __DADisk { } *)a0 error:(int *)a1;
- (void)cancelCurrentOperation;
- (id)userAccountsForDisk:(struct __DADisk { } *)a0 getError:(int *)a1;

@end
