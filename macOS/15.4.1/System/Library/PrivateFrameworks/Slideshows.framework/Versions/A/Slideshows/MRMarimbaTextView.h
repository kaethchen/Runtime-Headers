@class NSObject, MPText;
@protocol MRMarimbaBasicPlayback;

@interface MRMarimbaTextView : NSTextView {
    MPText *_editedText;
    NSObject<MRMarimbaBasicPlayback> *_marimbaPlayer;
    BOOL _disableUpdate;
    BOOL _useRichText;
}

- (void)dealloc;
- (void)didChangeText;
- (void)setTypingAttributes:(id)a0;
- (BOOL)shouldChangeTextInRanges:(id)a0 replacementStrings:(id)a1;
- (struct CGPoint { double x0; double x1; })textContainerOrigin;
- (void)_updateText;
- (void)_setPlaceholder;
- (void)resizeString:(id)a0 withFactor:(double)a1 toView:(BOOL)a2;
- (void)_updateLineHeight:(id)a0;
- (id)editedString:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inMarimbaPlayer:(id)a1 forText:(id)a2;
- (void)textBoundsNeedsUpdate;

@end
