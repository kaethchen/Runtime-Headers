@class NSURL;

@interface PHPhotoLibraryOpenOptions : NSObject

@property (copy) NSURL *libraryURL;
@property unsigned long long internalUpgradeOptions;
@property unsigned long long internalCreateOptions;
@property BOOL allowsUpgrade;

- (id)debugDescription;
- (void).cxx_destruct;

@end
