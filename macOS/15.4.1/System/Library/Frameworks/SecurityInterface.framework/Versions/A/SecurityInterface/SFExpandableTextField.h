@class NSAttributedString;

@interface SFExpandableTextField : NSTextField {
    BOOL _minimized;
    BOOL _isURLText;
    NSAttributedString *_fullString;
}

- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)minimized;
- (void)mouseDown:(id)a0;
- (void)resetCursorRects;
- (void)setAttributedStringValue:(id)a0;
- (void)setMinimized:(BOOL)a0;
- (BOOL)_isURLString:(id)a0;
- (id)_encodedURLString;
- (id)_expandableAttributedString:(id)a0;
- (BOOL)isURLText;

@end
