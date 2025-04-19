@class KHFrame;

@interface KHChildFrame : KHFrame {
    KHFrame *_parentFrame;
}

- (id)database;
- (id)parentFrame;
- (void)setParentFrame:(id)a0;
- (id)themeDB;
- (id)parentLayout;
- (id)themeBundle;

@end
