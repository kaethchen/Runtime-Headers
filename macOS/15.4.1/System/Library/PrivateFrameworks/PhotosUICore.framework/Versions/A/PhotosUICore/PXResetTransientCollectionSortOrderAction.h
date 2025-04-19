@interface PXResetTransientCollectionSortOrderAction : PXPhotosAction {
    void /* unknown type, empty encoding */ undoOrderedMediaTypes;
    void /* unknown type, empty encoding */ undoOrderedUtilityTypes;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ collection;

+ (BOOL)canPerformOnCollection:(id)a0;

- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;
- (void)performAction:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void)performUndo:(id /* block */)a0;

@end
