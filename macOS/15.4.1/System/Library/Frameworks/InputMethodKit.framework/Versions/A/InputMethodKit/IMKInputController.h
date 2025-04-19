@class IMKInputControllerPrivate;

@interface IMKInputController : NSObject <IMKStateSetting, IMKMouseHandling> {
    IMKInputControllerPrivate *_private;
}

+ (id)currentController;
+ (id)currentClientWrapper;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)_xpcConnection;
- (id)menu;
- (void)setServer:(id)a0;
- (id)client;
- (id)server;
- (void)activateServer:(id)a0;
- (void)commitComposition;
- (void)deactivateServer:(id)a0;
- (void)doCommandBySelector:(SEL)a0 commandDictionary:(id)a1;
- (void)hidePalettes;
- (void)invalidateClientGeometry;
- (void)ironwoodPlaceholderWasInvalidated:(id)a0 client:(id)a1;
- (void)ironwoodTextWasCorrected:(id)a0 client:(id)a1;
- (id)modes:(id)a0;
- (unsigned long long)recognizedEvents:(id)a0;
- (void)sendInputSessionSessAction:(unsigned int)a0 client:(id)a1;
- (void)sendInputSessionSessAction:(unsigned int)a0 timestamp:(double)a1 withInfo:(id)a2 client:(id)a3;
- (struct CGSize { double x0; double x1; })setAllowsCollapsingCandidateList:(BOOL)a0;
- (void)setInputMethodProperty:(unsigned long long)a0 value:(id)a1;
- (void)setValue:(id)a0 forTag:(long long)a1 client:(id)a2;
- (id)valueForTag:(long long)a0 client:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })replacementRange;
- (void)showPreferences:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectionRange;
- (void)performViewBridgeSafeOperation:(id /* block */)a0;
- (id)composedString:(id)a0;
- (id)initWithServer:(id)a0 delegate:(id)a1 client:(id)a2;
- (id)originalString:(id)a0;
- (id)_proxyConnection;
- (BOOL)_usesXPC;
- (BOOL)allowsCollapsingCandidateList;
- (void)annotationSelected:(id)a0 forCandidate:(id)a1;
- (void)cancelComposition;
- (void)candidateSelected:(id)a0;
- (void)candidateSelectionChanged:(id)a0;
- (id)candidates:(id)a0;
- (id)compositionAttributesAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)contextWithDelta:(long long)a0;
- (id)functionRowItemCPButtonViewController;
- (id)functionRowItemTextInputViewController;
- (void)inputControllerWillClose;
- (id)leftContextWithLength:(unsigned long long)a0;
- (id)markChromaticRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)markForStyle:(long long)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)mouseDownOnCharacterIndex:(unsigned long long)a0 coordinate:(struct CGPoint { double x0; double x1; })a1 withModifier:(unsigned long long)a2 continueTracking:(BOOL *)a3 client:(id)a4;
- (BOOL)mouseMovedOnCharacterIndex:(unsigned long long)a0 coordinate:(struct CGPoint { double x0; double x1; })a1 withModifier:(unsigned long long)a2 client:(id)a3;
- (BOOL)mouseUpOnCharacterIndex:(unsigned long long)a0 coordinate:(struct CGPoint { double x0; double x1; })a1 withModifier:(unsigned long long)a2 client:(id)a3;
- (id)rightContextWithLength:(unsigned long long)a0;
- (void)sendInputSessionSessAction:(unsigned int)a0 timestamp:(double)a1 client:(id)a2;
- (void)setClientDOProxy:(id)a0;
- (void)setSimulatorClient:(id)a0;
- (void)updateComposition;

@end
