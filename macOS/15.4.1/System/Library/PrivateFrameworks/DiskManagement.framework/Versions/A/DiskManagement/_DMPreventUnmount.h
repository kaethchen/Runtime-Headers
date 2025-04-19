@interface _DMPreventUnmount : NSObject {
    struct DMUDSPrivRec { unsigned long long signature_LE64; long long snap_num; char bsd_without_snap[150]; } _givenDisk;
    int _openDirFD;
}

- (void)dealloc;
- (id)init;
- (int)startPreventingUnmountOfMountedDisk:(struct DMUDSPrivRec { unsigned long long x0; long long x1; char x2[150]; } *)a0;
- (void)stopPreventingUnmount;

@end
