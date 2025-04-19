@class NSString, KHTheme, KHLayout;

@interface KHBaselineImageOperation : NSOperation {
    NSString *_basePath;
    KHTheme *_theme;
    KHLayout *_layout;
}

- (void)dealloc;
- (void)main;
- (id)initWithLayout:(id)a0 theme:(id)a1 basePath:(id)a2;

@end
