@interface _ICQPhotosInfo : NSObject

@property (nonatomic) unsigned long long photoCount;
@property (nonatomic) unsigned long long videoCount;

+ (id)_photosShutdownQueue;
+ (void)_shutDownPhotoLibrary;
+ (void)getInfoWithCompletion:(id /* block */)a0;
+ (BOOL)hasPhotoBulkCreation;
+ (BOOL)isPhotosSyncOverQuota;
+ (id)mockCount:(id)a0;

@end
