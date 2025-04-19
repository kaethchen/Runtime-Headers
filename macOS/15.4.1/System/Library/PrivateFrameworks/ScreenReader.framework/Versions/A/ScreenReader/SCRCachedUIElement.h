@class AXFUIElement;

@interface SCRCachedUIElement : NSObject {
    unsigned int _retainCount;
}

@property (retain, nonatomic) AXFUIElement *uiElement;

- (void).cxx_destruct;
- (id)initWithUIElement:(id)a0;
- (void)retainUIElement;
- (unsigned int)elementRetainCount;
- (void)releaseUIElement;

@end
