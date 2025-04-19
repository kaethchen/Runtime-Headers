@interface MusicUI.SocialEditTextField : MusicUI.FlippedView <NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ initialStringValue;
    void /* unknown type, empty encoding */ placeholderString;
    void /* unknown type, empty encoding */ immutablePrefix;
    void /* unknown type, empty encoding */ requiresInputFiltering;
    void /* unknown type, empty encoding */ editableFormCoordinator;
    void /* unknown type, empty encoding */ onTextDidChange;
    void /* unknown type, empty encoding */ onTextDidRevertToInitialValue;
    void /* unknown type, empty encoding */ isValid;
    void /* unknown type, empty encoding */ scopeIdentifier;
    void /* unknown type, empty encoding */ itemIdentifier;
    void /* unknown type, empty encoding */ previousStringValue;
    void /* unknown type, empty encoding */ baseTextField;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)controlTextDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
