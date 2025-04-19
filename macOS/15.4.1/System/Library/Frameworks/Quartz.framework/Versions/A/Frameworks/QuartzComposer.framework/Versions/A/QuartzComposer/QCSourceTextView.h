@class NSString, NSDictionary, NSColor;

@interface QCSourceTextView : NSTextView <NSTextDelegate, NSTextViewDelegate> {
    BOOL _showLines;
    NSDictionary *_keywordColors;
    NSColor *_stringColor;
    NSColor *_commentColor;
    NSColor *_preprocessorColor;
    NSColor *_errorColor;
    NSColor *_numberColor;
    unsigned long long _fontSize;
    void *_unused[3];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)parseSource:(id)a0 callback:(void /* function */ *)a1 userInfo:(void *)a2;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)source;
- (void)_finishInitialization;
- (void)awakeFromNib;
- (void)changeFont:(id)a0;
- (double)fontSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertNewline:(id)a0;
- (void)keyDown:(id)a0;
- (void)setFontSize:(double)a0;
- (void)setSource:(id)a0;
- (void)textDidChange:(id)a0;
- (void)viewDidMoveToSuperview;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })__shiftRight:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })__shiftLeft:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setNumberColor:(id)a0;
- (void)setStringColor:(id)a0;
- (void)_highlightAllLinesWithColor:(id)a0;
- (void)_highlightLine:(unsigned long long)a0 withColor:(id)a1;
- (void)_shiftLeft:(id)a0;
- (void)_shiftRight:(id)a0;
- (void)_showLineNumbers:(BOOL)a0;
- (id)commentColor;
- (id)errorHighlightColor;
- (BOOL)hasLineNumbers;
- (id)keywordColors;
- (id)numberColor;
- (id)preprocessorColor;
- (void)setCommentColor:(id)a0;
- (void)setErrorHighlightColor:(id)a0;
- (void)setErrorLine:(unsigned long long)a0;
- (void)setHasLineNumbers:(BOOL)a0;
- (void)setHighlightLine:(unsigned long long)a0;
- (void)setKeywordColors:(id)a0;
- (void)setPreprocessorColor:(id)a0;
- (void)shiftLeft:(id)a0;
- (void)shiftRight:(id)a0;
- (id)stringColor;

@end
