@interface PhotosUIPrivate.StoryColorGradeEditorItemLayout : PXGAbsoluteCompositeLayout {
    void /* unknown type, empty encoding */ colorGradeKind;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ clipLayout;
    void /* unknown type, empty encoding */ clipLayoutIndex;
    void /* unknown type, empty encoding */ overlayLayout;
    void /* unknown type, empty encoding */ overlayLayoutIndex;
    void /* unknown type, empty encoding */ previewMode;
    void /* unknown type, empty encoding */ updateFlags;
    void /* unknown type, empty encoding */ clip;
    void /* unknown type, empty encoding */ clipTimeRange;
    void /* unknown type, empty encoding */ captionHeight;
}

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (id)initWithComposition:(id)a0;
- (void)referenceSizeDidChange;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(id *)a2;

@end
