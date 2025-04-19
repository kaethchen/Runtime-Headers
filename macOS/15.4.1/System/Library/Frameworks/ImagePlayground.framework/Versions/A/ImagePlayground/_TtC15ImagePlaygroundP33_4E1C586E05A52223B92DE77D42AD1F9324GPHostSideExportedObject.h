@interface _TtC15ImagePlaygroundP33_4E1C586E05A52223B92DE77D42AD1F9324GPHostSideExportedObject : _TtCs12_SwiftObject <ImagePlayground.GPHostProtocol> {
    void /* unknown type, empty encoding */ pickerDelegate;
    void /* unknown type, empty encoding */ editorDelegate;
    void /* unknown type, empty encoding */ progressDelegate;
}

- (void)pickerDidCancel;
- (void)editorDidCancelWithRequiresShowingGrid:(BOOL)a0;
- (void)editorDidChangeCanStartUpscaling:(BOOL)a0;
- (void)editorDidChangeHasSignificantEdits:(BOOL)a0;
- (void)editorDidGenerateAssets:(id)a0;
- (void)pickerDidSelectAssets:(id)a0;
- (void)pickerWantsToStartCreationWithIsTransitionSupported:(BOOL)a0 replyHandler:(id /* block */)a1;
- (void)pickerWillStartCreation;

@end
