@class NSString;

@interface VolumeInfoObject : NSObject {
    NSString *_bsdName;
    NSString *_volName;
    short _vRefNum;
    struct FSRef { unsigned char hidden[80]; } _fsRef;
    NSString *_mountPoint;
}

+ (id)getVolumeInfoFromService:(unsigned int)a0;
+ (id)mountPointFoBSDPath:(id)a0;
+ (int)unmountPartitions:(id)a0;
+ (id)volumeInfoObject:(char[512] *)a0 volumeName:(struct HFSUniStr255 { unsigned short x0; unsigned short x1[255]; } *)a1 volumeRefNum:(short)a2 fileSystemRef:(struct FSRef { unsigned char x0[80]; } *)a3;

- (void)dealloc;
- (id)description;
- (id)bsdName;
- (id)mountPoint;
- (void)setMountPoint:(id)a0;
- (id)volumePath;
- (void)setBsdName:(id)a0;
- (id)volName;
- (short)vRefNum;
- (void)getRootDirFSRef:(struct FSRef { unsigned char x0[80]; } *)a0;
- (id)initWithBSDName:(char[512] *)a0 volumeName:(struct HFSUniStr255 { unsigned short x0; unsigned short x1[255]; } *)a1 volumeRefNum:(short)a2 fileSystemRef:(struct FSRef { unsigned char x0[80]; } *)a3;
- (void)setVRefNum:(short)a0;
- (void)setVolName:(id)a0;

@end
