@class OSAScriptController;

@interface OSAScriptTextStorage : OSATextStorage {
    OSAScriptController *_controller;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)controller;
- (id)initWithController:(id)a0;
- (void)setController:(id)a0;
- (id)undoManager;

@end
