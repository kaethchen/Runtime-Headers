@class NSString;

@interface IFNetworkDiskObject : NSObject {
    NSString *_mountPath;
}

- (void)dealloc;
- (unsigned long long)availableSpace;
- (unsigned long long)totalSize;
- (id)volumeName;
- (id)mountPoint;
- (unsigned long long)freeSpace;
- (id)diskIdentifier;
- (BOOL)isRootVolume;
- (BOOL)filesystemIsLocked;
- (id)initWithMountPath:(id)a0;

@end
