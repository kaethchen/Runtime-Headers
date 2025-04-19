@class PXPhotosSectionHeaderLayoutSpec;

@interface _PXPhotosLayoutWithSectionHeadersSpec : PXPhotosLayoutSpec {
    PXPhotosSectionHeaderLayoutSpec *_sectionHeaderSpec;
}

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 gridStyle:(long long)a2 wantsToggleSidebarButton:(BOOL)a3 shouldMakeSpaceForLeadingChrome:(BOOL)a4;
- (id)sectionHeaderSpec;

@end
