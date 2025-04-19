@class NSColor, NSColorWell;

@interface NSDebugCustomAccentColorViewController : NSViewController {
    NSColor *_originalColor;
    NSColorWell *_colorWell;
}

- (void)dealloc;
- (id)_colorWell;
- (void)loadView;
- (void)revertCustomAccentColor:(id)a0;
- (void)updateCustomAccentColor:(id)a0;

@end
