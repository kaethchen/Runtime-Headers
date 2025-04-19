@interface VideosUI.SidebarSearchFieldDelegate : NSObject <VUIHintsWindowControllerDelegate, NSSearchFieldDelegate, VUISearchFieldDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ searchField;
    void /* unknown type, empty encoding */ searchDetailsViewController;
    void /* unknown type, empty encoding */ hintWindowViewController;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)hintsWindowControllerDidDismiss;
- (void)searchFieldDidBecomeFocus:(id)a0;

@end
