@class NSString, AMPLSharingClient, AMPSPublicSharingPrefs, AMPSHomeSharingPrefs, AMPSPhotoSharingPrefs;

@interface AMPSSharingPrefs : NSObject

@property (retain, nonatomic) AMPLSharingClient *client;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *libraryName;
@property (readonly, nonatomic) AMPSPublicSharingPrefs *publicPrefs;
@property (readonly, nonatomic) AMPSHomeSharingPrefs *homeSharingPrefs;
@property (readonly, nonatomic) AMPSPhotoSharingPrefs *photoSharingPrefs;

- (id)init;
- (void).cxx_destruct;
- (BOOL)setup;
- (void)setSharedLibraryName:(id)a0 withReply:(id /* block */)a1;
- (void)loadHomeSharingPrefs:(id /* block */)a0;
- (void)loadMediaSharingPrefs:(id /* block */)a0;
- (void)loadPhotoSharingPrefs:(id /* block */)a0;
- (void)loadPrefs:(id /* block */)a0;
- (void)loadPublicSharingPrefs:(id /* block */)a0;

@end
