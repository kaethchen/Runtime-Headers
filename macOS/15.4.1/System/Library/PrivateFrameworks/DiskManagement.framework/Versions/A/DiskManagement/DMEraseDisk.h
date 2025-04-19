@interface DMEraseDisk : NSObject {
    id _instPriv;
}

+ (id)defaultFilesystemForDisk:(struct __DADisk { } *)a0;
+ (id)eraseTypesForDisk:(struct __DADisk { } *)a0;

- (void)dealloc;
- (id)init;
- (id)initWithManager:(id)a0;
- (int)eraseOpticalAsync:(struct __DADisk { } *)a0 quick:(BOOL)a1 format:(BOOL)a2;
- (int)armWindowsInstallerPartitionRemoverOnBootCampWholeDisk:(struct __DADisk { } *)a0;
- (void)cancelCurrentOperation;
- (id)eraseDisk:(struct __DADisk { } *)a0 synchronous:(BOOL)a1 filesystem:(id)a2 bootable:(BOOL)a3 name:(id)a4 doNewfs:(BOOL)a5;
- (id)eraseDisk:(struct __DADisk { } *)a0 synchronous:(BOOL)a1 filesystem:(id)a2 bootable:(BOOL)a3 name:(id)a4 doNewfs:(BOOL)a5 doBooterCleanup:(BOOL)a6;
- (int)fulfillWindowsInstallerPartitionRemovalFromCurrentBootDisk;
- (int)securelyEraseDisk:(struct __DADisk { } *)a0 level:(unsigned int)a1;
- (int)securelyEraseFreespace:(struct __DADisk { } *)a0 level:(unsigned int)a1;
- (int)wipeDisk:(struct __DADisk { } *)a0 level:(unsigned int)a1 count:(unsigned long long)a2;
- (int)wipeDisk:(struct __DADisk { } *)a0 level:(unsigned int)a1 count:(unsigned long long)a2 force:(BOOL)a3;

@end
