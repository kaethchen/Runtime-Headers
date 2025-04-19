@interface PhotosUICore.HighlightsHitTestResult : PXGHitTestResult <PXPhotosViewTouchableHitTestResult> {
    void /* unknown type, empty encoding */ level;
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ displayItem;
    void /* unknown type, empty encoding */ px_photosViewTouchableHitTestResultTouchAction;
}

@property (nonatomic, readonly) id /* block */ px_photosViewTouchableHitTestResultTouchAction;

- (void).cxx_destruct;
- (id)initWithSpriteReference:(id)a0 layout:(id)a1 identifier:(id)a2 userDataProvider:(id /* block */)a3;

@end
