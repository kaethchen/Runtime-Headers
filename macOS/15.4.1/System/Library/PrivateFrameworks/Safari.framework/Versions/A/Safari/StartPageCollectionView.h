@class NSView;

@interface StartPageCollectionView : CollectionViewPlus {
    long long _lastSuccessfulDropId;
    long long _currentDropId;
    NSView *_backgroundImageView;
    BOOL _inDropOperation;
    BOOL _avoidAnimatingImage;
}

@property (nonatomic) BOOL disableDragAndDrop;

- (void).cxx_destruct;
- (void)draggingExited:(id)a0;
- (void)concludeDragOperation:(id)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)setBackgroundImageView:(id)a0;
- (unsigned long long)_backgroundImageDraggingEntered:(id)a0;
- (void)_concludeDropOperation:(long long)a0;
- (void)_processPromisedFiles:(id)a0 useDraggingThumbnail:(BOOL)a1;
- (void)_setBackgroundImage:(struct CGImage { } *)a0;
- (void)_updateBackgroundImageFromURL:(id)a0 sequenceNumber:(long long)a1;

@end
