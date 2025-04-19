@interface SwiftUI.AppKitSearchFieldCoordinator : SwiftUI.PlatformViewCoordinator <NSSearchFieldDelegate, NSTokenFieldCellDelegate, NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ suggestionsView;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ preferredWidth;
    void /* unknown type, empty encoding */ focusUpdate;
    void /* unknown type, empty encoding */ lastText;
    void /* unknown type, empty encoding */ lastAttachmentCells;
    void /* unknown type, empty encoding */ isViewUpdating;
    void /* unknown type, empty encoding */ expectedSelectionVersion;
}

- (id)init;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;

@end
