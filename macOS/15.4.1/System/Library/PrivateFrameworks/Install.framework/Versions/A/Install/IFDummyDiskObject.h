@interface IFDummyDiskObject : NSObject

- (unsigned long long)availableSpace;
- (unsigned long long)totalSize;
- (id)volumeName;
- (id)mountPoint;
- (unsigned long long)freeSpace;
- (id)diskIdentifier;
- (BOOL)isRootVolume;
- (BOOL)filesystemIsLocked;

@end
