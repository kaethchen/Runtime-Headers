@class PXSharedLibraryFaceTileImageProviderModel, NSImage, NSString, CNContact, PXFaceTileImageCombiner, PXFaceTileImageCombinerContext;

@interface PXSharedLibraryFaceTileImageProvider : PXObservable <PXChangeObserver> {
    CNContact *_meContact;
    PXFaceTileImageCombiner *_faceTileImageCombiner;
    PXFaceTileImageCombinerContext *_context;
}

@property (readonly, nonatomic) PXSharedLibraryFaceTileImageProviderModel *providerModel;
@property (readonly, copy, nonatomic) NSImage *combinedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateContext;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_setMeContact:(id)a0;
- (void)_updateCombinedImage;
- (void)_updateIncludeMeContact;
- (void)setCombinedImage:(id)a0;

@end
