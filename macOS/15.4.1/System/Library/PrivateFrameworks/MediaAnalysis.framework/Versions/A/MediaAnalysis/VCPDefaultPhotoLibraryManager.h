@class NSString, NSURL, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface VCPDefaultPhotoLibraryManager : NSObject <PHPhotoLibraryAvailabilityObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_defaultPhotoLibraryURL;
    PHPhotoLibrary *_defaultPhotoLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)photoLibraryDidBecomeUnavailable:(id)a0;
- (id)defaultPhotoLibrary;
- (void)closedefaultPhotoLibrary;

@end
