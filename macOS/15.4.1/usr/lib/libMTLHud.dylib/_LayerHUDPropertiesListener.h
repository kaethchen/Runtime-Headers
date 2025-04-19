@class CAMetalLayer;

@interface _LayerHUDPropertiesListener : NSObject {
    void *m_overlay;
}

@property (weak, nonatomic) CAMetalLayer *m_metalLayer;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithLayer:(id)a0 andOverlay:(void *)a1;

@end
