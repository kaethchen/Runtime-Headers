@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface ASStorageInfo : NSObject

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSString *osBootVolumeName;
@property (retain) NSArray *mountedVolumes;

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)registerForChangeNotifications;
- (void)volumesChanged:(id)a0;
- (id)getBootVolumeName;
- (void)getVolumesInfoWithCompletion:(id /* block */)a0;
- (void)unregisterForChangeNotifications;

@end
