@class NSMutableArray, NSHashTable;

@interface AVCaptureDeviceInternal_Tundra : NSObject {
    int openRefCount;
    BOOL usingDevice;
    int lockedForConfigurationRefCount;
    NSHashTable *linkedDevices;
    NSMutableArray *activeReactions;
}

- (void)dealloc;
- (id)init;

@end
