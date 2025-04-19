@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, SPMVolumeObserverDelegate;

@interface SPMVolumeObserver : NSObject

@property struct _CFVolumeObserver { } *observer;
@property BOOL existingVolumeEventsRecieved;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) NSObject<OS_dispatch_group> *initializeGroup;
@property (retain) NSMutableSet *internalVolumes;
@property (readonly) id<SPMVolumeObserverDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)volumes;
- (void)_handleVolumeMountedAtURL:(id)a0 name:(id)a1;
- (void)_handleEvent:(unsigned long long)a0 disk:(struct __DADisk { } *)a1 volumeURL:(id)a2 volumeName:(id)a3;
- (void)_handleVolumeUnountedAtURL:(id)a0 name:(id)a1;
- (void)_notifyDelegateWithVolume:(id)a0 mounted:(BOOL)a1;

@end
