@interface PhotosUICore.PhotosDynamicHeaderLayoutProvider : NSObject <PXPhotosGlobalHeaderLayoutProvider> {
    void /* unknown type, empty encoding */ style;
}

- (id)init;
- (void)configureGlobalHeaderLayout:(id)a0 dataSource:(id)a1 spec:(id)a2;
- (id)createGlobalHeaderLayoutForPhotosViewModel:(id)a0 dataSource:(id)a1 spec:(id)a2;

@end
