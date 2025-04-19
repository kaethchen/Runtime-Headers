@interface PXRearrangeTransientCollectionListAction : PXPhotosAction {
    void /* unknown type, empty encoding */ undoOrderedMediaTypes;
    void /* unknown type, empty encoding */ redoOrderedMediaTypes;
    void /* unknown type, empty encoding */ undoOrderedUtilityTypes;
    void /* unknown type, empty encoding */ redoOrderedUtilityTypes;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ movedCollections;
@property (nonatomic, retain) void /* unknown type, empty encoding */ targetCollection;

+ (BOOL)canPerformOnCollection:(id)a0;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void)performUndo:(id /* block */)a0;
- (id)initWithCollectionList:(id)a0 movedCollections:(id)a1 targetCollection:(id)a2;
- (void)performRedo:(id /* block */)a0;

@end
