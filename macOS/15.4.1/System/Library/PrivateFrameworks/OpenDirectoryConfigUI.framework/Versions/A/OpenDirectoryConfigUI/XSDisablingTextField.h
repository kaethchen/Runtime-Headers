@class NSColor;

@interface XSDisablingTextField : NSTextField {
    NSColor *origTextColor;
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;

@end
