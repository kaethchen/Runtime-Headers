@interface NSNavBannerButtonCell : NSButtonCell

@property BOOL disabledWhenInactive;

- (id)initWithCoder:(id)a0;
- (BOOL)isEnabled;
- (BOOL)_acceptsFirstMouseForEvent:(id)a0 inView:(id)a1;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (void)_setupAttributes;
- (id)initTextCell:(id)a0;

@end
