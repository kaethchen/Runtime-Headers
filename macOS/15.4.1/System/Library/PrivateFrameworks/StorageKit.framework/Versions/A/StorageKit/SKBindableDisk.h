@class NSString, NSImage, NSLock, SKDisk;

@interface SKBindableDisk : NSObject

@property (retain) NSLock *observingLock;
@property BOOL isObserving;
@property (retain) NSString *role;
@property (retain) NSString *type;
@property BOOL isValid;
@property (retain) NSImage *diskIcon;
@property (retain) NSString *volumeName;
@property (retain) NSString *volumeUUID;
@property (retain) NSString *mountPoint;
@property unsigned long long freeSpace;
@property unsigned long long purgeableSpace;
@property unsigned long long availableSpace;
@property unsigned long long totalSpace;
@property unsigned long long minimumDiskSize;
@property unsigned long long maximumDiskSize;
@property BOOL canBeDeleted;
@property (retain) NSString *diskIdentifier;
@property (retain) NSString *protocol;
@property BOOL isDiskImage;
@property BOOL isInternal;
@property BOOL isSolidState;
@property BOOL isWholeDisk;
@property BOOL isWritable;
@property BOOL isLocked;
@property BOOL canSupportRecoveryPartition;
@property BOOL isOSInternal;
@property (retain) SKDisk *representedDisk;
@property (readonly) NSString *contentDiskIdentifier;
@property BOOL supportsJournaling;
@property BOOL isEjectable;
@property BOOL isNetwork;

+ (id)keysToObserve;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithRepresentedDisk:(id)a0;

@end
