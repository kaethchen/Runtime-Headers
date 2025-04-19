@class NSNumberFormatter;

@interface NSRulerLabelCell : NSTextFieldCell {
    NSNumberFormatter *_auxiliaryFormatter;
}

- (void)dealloc;
- (id)_auxiliaryFormatter;
- (void)_setAuxiliaryFormatter:(id)a0;
- (long long)_typesetterBehavior;

@end
