@class NSColor;

@interface NSTextValueBinder : NSValueBinder {
    struct __textBinderFlags { unsigned char _objectSupportsTextColor : 1; unsigned char _hasRequestedTextColor : 1; unsigned int _reservedTextBinder : 30; } _textBinderFlags;
    NSColor *_originalColor;
    NSColor *_nullColor;
    NSColor *_noSelectionColor;
    NSColor *_multipleValuesSelectionColor;
    NSColor *_notApplicableColor;
    id _textColorBinder;
}

+ (id)binderClassesSuperseded;
+ (id)defaultTextColorWhenObjectValueIsUsed:(id)a0;
+ (void)setDefaultTextColor:(id)a0 whenObjectValueIsUsed:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_init;
- (id)textColorWhenObjectValueIsUsed:(id)a0;
- (void)_adjustTextColorOfObject:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1;
- (void)_clearDependenciesWithAllPeerBinders;
- (void)_connectionWasEstablished;
- (void)_copyDetailsFromBinder:(id)a0;
- (void)_dealloc;
- (void)_endChanging;
- (void)_noticeTextColorPeerBinder:(id)a0;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (void)_setObject:(id)a0;
- (void)_startChanging;
- (void)setTextColor:(id)a0 whenObjectValueIsUsed:(id)a1;
- (void)updateOutlineColumnDataCell:(id)a0 forDisplayAtIndexPath:(id)a1;
- (void)updateTableColumnDataCell:(id)a0 forDisplayAtIndex:(unsigned long long)a1;

@end
