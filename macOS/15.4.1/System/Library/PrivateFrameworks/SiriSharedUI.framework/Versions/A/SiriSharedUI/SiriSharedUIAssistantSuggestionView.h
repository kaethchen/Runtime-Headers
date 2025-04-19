@interface SiriSharedUIAssistantSuggestionView : NSView {
    void /* unknown type, empty encoding */ suggestion;
    void /* unknown type, empty encoding */ suggestionsModel;
    void /* unknown type, empty encoding */ hostingView;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ isEnabled;
    void /* unknown type, empty encoding */ suggestionsMaxWidth;
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ isDismissed;
    void /* unknown type, empty encoding */ pressDownHandler;
    void /* unknown type, empty encoding */ pressUpHandler;
}

@property (nonatomic, copy) id /* block */ pressDownHandler;
@property (nonatomic, copy) id /* block */ pressUpHandler;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (BOOL)isPresented;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)performSuggestionInPlaceAnimationDismissing;
- (void)performSuggestionInPlaceAnimationPresenting;

@end
