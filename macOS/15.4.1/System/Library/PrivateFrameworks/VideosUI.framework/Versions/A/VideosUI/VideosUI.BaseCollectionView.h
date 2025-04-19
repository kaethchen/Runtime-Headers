@interface VideosUI.BaseCollectionView : NSCollectionView <NSCollectionViewDelegate> {
    void /* unknown type, empty encoding */ vuiDelegate;
    void /* unknown type, empty encoding */ vuiScrollDelegate;
    void /* unknown type, empty encoding */ vuiContextMenuDelegate;
    void /* unknown type, empty encoding */ vuiHoverDelegate;
    void /* unknown type, empty encoding */ vuiVoiceOverDelegate;
    void /* unknown type, empty encoding */ viewClipsToBounds;
    void /* unknown type, empty encoding */ lastHighlightIndexPath;
    void /* unknown type, empty encoding */ isManagingChevronViewVisibility;
    void /* unknown type, empty encoding */ pendingMouseMovedEvent;
}

@property (nonatomic, readonly) BOOL wantsDefaultClipping;
@property (nonatomic) BOOL vuiClipsToBounds;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)collectionView:(id)a0 willDisplayItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)wantsForwardedScrollEventsForAxis:(long long)a0;
- (void)collectionViewDidEndScrollWithNotification:(id)a0;
- (void)collectionViewDidScrollWithNotification:(id)a0;
- (void)handleMouseHoverWith:(id)a0;

@end
