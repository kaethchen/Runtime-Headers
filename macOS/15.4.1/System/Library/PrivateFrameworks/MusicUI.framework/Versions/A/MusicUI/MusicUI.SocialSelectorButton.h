@interface MusicUI.SocialSelectorButton : MusicUI.FlippedView <NSGestureRecognizerDelegate, NSTextViewDelegate> {
    void /* unknown type, empty encoding */ onValueChanged;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ imageCatalog;
    void /* unknown type, empty encoding */ shouldDisplayArtwork;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_clickGestureRecognizer;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ checkmarkButton;
    void /* unknown type, empty encoding */ _titleLabel;
    void /* unknown type, empty encoding */ _subtitlTextView;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(long long)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textView:(id)a0 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 toCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)onButtonClicked:(id)a0;

@end
