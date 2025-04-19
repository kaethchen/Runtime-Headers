@interface SwiftUI.PlatformTextFieldCoordinator : SwiftUI.PlatformViewCoordinator <NSTextFieldDelegate, NSTextViewDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ suggestionsView;
    void /* unknown type, empty encoding */ trailingAccessory;
    void /* unknown type, empty encoding */ borderStyle;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ lastText;
    void /* unknown type, empty encoding */ nsTextField;
    void /* unknown type, empty encoding */ isViewUpdating;
    void /* unknown type, empty encoding */ isUserEditing;
}

- (id)init;
- (void).cxx_destruct;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (void)controlActionWithSender:(id)a0;

@end
