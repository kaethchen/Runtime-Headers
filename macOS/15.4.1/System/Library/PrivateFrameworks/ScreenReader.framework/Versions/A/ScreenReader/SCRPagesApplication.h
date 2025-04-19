@interface SCRPagesApplication : SCRiWorkApplication

- (void)_textSelectionDidChange:(id)a0;
- (void)_valueDidChange:(id)a0;
- (id)focusedUIElement;
- (BOOL)isPagesApplication;
- (unsigned long long)majorVersionNumberForiWorkApplicationVersion:(long long)a0;
- (BOOL)shouldListenForValueChanges;

@end
