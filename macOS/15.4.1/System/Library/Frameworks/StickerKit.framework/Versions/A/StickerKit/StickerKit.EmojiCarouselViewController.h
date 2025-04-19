@interface StickerKit.EmojiCarouselViewController : NSViewController {
    void /* unknown type, empty encoding */ feedbackHelper;
    void /* unknown type, empty encoding */ useCachedImagesForDebugging;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ hostPid;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ isManuallySettingOffset;
    void /* unknown type, empty encoding */ pageControlVC;
    void /* unknown type, empty encoding */ _generator;
    void /* unknown type, empty encoding */ currentGenerationErrors;
    void /* unknown type, empty encoding */ blobViews;
    void /* unknown type, empty encoding */ enableAnimationsDuringUpdateTransforms;
    void /* unknown type, empty encoding */ showsMoreButton;
    void /* unknown type, empty encoding */ queryInfo;
    void /* unknown type, empty encoding */ generating;
    void /* unknown type, empty encoding */ maxDefaultBlobViews;
    void /* unknown type, empty encoding */ processedBlobViews;
    void /* unknown type, empty encoding */ pageControllerVerticalConstraint;
    void /* unknown type, empty encoding */ currentBlobIndex;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ blurFilter;
    void /* unknown type, empty encoding */ blurEnabled;
    void /* unknown type, empty encoding */ pageControlVerticalDistanceCompact;
    void /* unknown type, empty encoding */ pageControlVerticalDistanceNormal;
    void /* unknown type, empty encoding */ pageControlLayoutGuide;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)viewWillAppear;

@end
