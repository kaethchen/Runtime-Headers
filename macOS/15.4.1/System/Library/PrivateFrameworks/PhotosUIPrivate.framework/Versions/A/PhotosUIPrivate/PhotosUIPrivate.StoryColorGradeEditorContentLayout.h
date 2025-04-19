@interface PhotosUIPrivate.StoryColorGradeEditorContentLayout : PXGDecoratingLayout <PXGSelectionDecorationSource> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ overlayLayout;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDecoratedLayout:(id)a0;
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)a0 inLayout:(id)a1;
- (struct { float x0; float x1; float x2; float x3; })overlayInsetsForSpriteIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)selectedSpriteIndexesInLayout:(id)a0;
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)a0;
- (long long)selectionDecorationStyleInLayout:(id)a0;

@end
