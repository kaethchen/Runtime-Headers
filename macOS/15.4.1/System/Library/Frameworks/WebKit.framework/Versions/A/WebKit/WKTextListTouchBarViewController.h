@interface WKTextListTouchBarViewController : NSViewController {
    void *_webViewImpl;
}

@property (nonatomic) unsigned char currentListType;

- (void)_selectList:(id)a0;
- (void)didDestroyView;
- (id)initWithWebViewImpl:(void *)a0;

@end
