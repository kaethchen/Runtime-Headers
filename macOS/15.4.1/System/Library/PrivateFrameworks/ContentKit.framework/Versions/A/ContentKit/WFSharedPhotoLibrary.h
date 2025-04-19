@class NSString, PHPhotoLibrary;

@interface WFSharedPhotoLibrary : NSObject <PHPhotoLibraryAvailabilityObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PHPhotoLibrary *_lock_systemPhotoLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLibrary;
+ (id)userPicturesDirectoryPath;
+ (id)wallpaperDirectoryName;
+ (id)wallpaperDirectoryPath;

- (id)init;
- (void).cxx_destruct;
- (void)photoLibraryDidBecomeUnavailable:(id)a0;
- (id)fetchOptionsWithError:(id *)a0;
- (id)systemPhotoLibraryWithError:(id *)a0;

@end
