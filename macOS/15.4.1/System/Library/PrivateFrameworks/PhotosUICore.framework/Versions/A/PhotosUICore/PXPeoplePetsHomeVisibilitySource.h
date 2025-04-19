@interface PXPeoplePetsHomeVisibilitySource : NSObject <PXPhotoLibraryUIChangeObserver> {
    void /* unknown type, empty encoding */ humans;
    void /* unknown type, empty encoding */ pets;
    void /* unknown type, empty encoding */ defaults;
}

@property (nonatomic) void /* unknown type, empty encoding */ visibility;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;

@end
