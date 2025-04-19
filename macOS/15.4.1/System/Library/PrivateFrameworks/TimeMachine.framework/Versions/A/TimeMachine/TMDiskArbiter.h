@class DMManager;

@interface TMDiskArbiter : NSObject {
    struct __DASession { } *_daSession;
    DMManager *_dmManager;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)manager;
- (BOOL)_performSynchronousOperation:(unsigned int)a0 withDisk:(struct __DADisk { } *)a1 options:(unsigned int)a2 diskInfo:(out id *)a3 error:(out id *)a4;
- (struct __DADisk { } *)copyDiskForDevice:(id)a0;
- (BOOL)ejectDisk:(struct __DADisk { } *)a0 error:(out id *)a1;
- (BOOL)isDevicePresent:(id)a0;
- (id)mountDisk:(struct __DADisk { } *)a0 error:(out id *)a1;
- (BOOL)unmountDisk:(struct __DADisk { } *)a0 error:(out id *)a1;
- (BOOL)unmountDisk:(struct __DADisk { } *)a0 force:(BOOL)a1 error:(out id *)a2;

@end
