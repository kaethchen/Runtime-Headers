@class NSSlider, KHFrame;

@interface KHUXPrintsFrameOptionsViewController : UXViewController {
    NSSlider *_zoomSlider;
}

@property (readonly, nonatomic) NSSlider *zoomSlider;
@property (readonly, nonatomic) KHFrame *frameObject;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;
- (id)initWithFrameObject:(id)a0;
- (void)zoomChanged:(id)a0;

@end
