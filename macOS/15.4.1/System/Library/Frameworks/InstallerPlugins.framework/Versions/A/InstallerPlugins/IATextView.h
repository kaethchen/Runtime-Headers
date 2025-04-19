@interface IATextView : NSTextView {
    BOOL _contextualMenuIsDisabled;
}

- (id)menuForEvent:(id)a0;
- (BOOL)shouldDrawInsertionPoint;
- (void)setContextualMenuDisabled:(BOOL)a0;

@end
