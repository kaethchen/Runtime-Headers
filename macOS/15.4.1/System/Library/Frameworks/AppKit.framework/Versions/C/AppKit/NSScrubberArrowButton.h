@interface NSScrubberArrowButton : NSButton {
    BOOL _isLeft;
}

@property (readonly) BOOL arrowFacesLeft;

+ (Class)cellClass;

- (BOOL)acceptsFirstResponder;
- (long long)accessibilityIndex;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)initWithArrowFacesLeft:(BOOL)a0;

@end
