@protocol NSTextInput, NSObject;

@interface NSInputClientWrapper : NSObject <NSTextInput> {
    id<NSTextInput, NSObject> _realClient;
    id _lastString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _lastRange;
}

+ (id)clientWrapperWithRealClient:(id)a0;
+ (void)invalidateConnectionsAsNecessary:(id)a0;
+ (void)terminateForClient:(id)a0;

- (void)dealloc;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long)conversationIdentifier;
- (void)doCommandBySelector:(SEL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)hasMarkedText;
- (id)initWithRealClient:(id)a0;
- (void)insertText:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })markedRange;
- (void)resetState;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)unmarkText;
- (id)validAttributesForMarkedText;

@end
