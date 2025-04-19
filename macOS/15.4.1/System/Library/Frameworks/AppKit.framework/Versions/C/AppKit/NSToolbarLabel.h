@class NSString, NSLayoutConstraint;

@interface NSToolbarLabel : NSTextField {
    NSLayoutConstraint *_minimumWidthConstraint;
}

@property (copy) NSString *title;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateMinimumSize;
- (void)setBordered:(BOOL)a0;

@end
