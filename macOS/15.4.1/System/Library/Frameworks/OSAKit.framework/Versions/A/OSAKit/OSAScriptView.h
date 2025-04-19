@class NSString, OSAScriptViewPrivate;

@interface OSAScriptView : NSTextView {
    OSAScriptViewPrivate *_private;
}

@property (copy) NSString *source;
@property BOOL usesScriptAssistant;
@property BOOL usesTabs;
@property unsigned long long tabWidth;
@property BOOL wrapsLines;
@property BOOL indentsWrappedLines;
@property unsigned long long indentWidth;

+ (void)initialize;

- (void)dealloc;
- (void)finalize;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)awakeFromNib;
- (void)complete:(id)a0;
- (id)controller;
- (void)copyFont:(id)a0;
- (void)doCommandBySelector:(SEL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertNewline:(id)a0;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (id)readablePasteboardTypes;
- (void)replaceTextStorage:(id)a0;
- (void)setController:(id)a0;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 affinity:(unsigned long long)a1 stillSelecting:(BOOL)a2;
- (void)setTypingAttributes:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (id)scriptAssistant;
- (void)_ensureScriptAssistant;
- (void)autoIndent:(id)a0;
- (void)compileScript:(id)a0;
- (void)recordScript:(id)a0;
- (void)runScript:(id)a0;
- (void)stopScript:(id)a0;

@end
