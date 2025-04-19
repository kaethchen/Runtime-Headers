@interface _TtCC7MusicUI20ContentPagingManager20SectionPagingManager : NSResponder {
    void /* unknown type, empty encoding */ indexPath;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ lastPinnedIndexPath;
    void /* unknown type, empty encoding */ trackingArea;
    void /* unknown type, empty encoding */ shouldDisplayLeftDisclosureArrow;
    void /* unknown type, empty encoding */ shouldDisplayRightDisclosureArrow;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)didStartLiveScroll:(id)a0;
- (void)documentViewBoundsDidChange:(id)a0;
- (void)sectionDidChangeBounds:(id)a0;

@end
