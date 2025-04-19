@interface WKPDFHUDView : NSView {
    struct WeakPtr<WebKit::WebPageProxy, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _page;
    struct RetainPtr<NSString> { void *m_ptr; } _activeControl;
    struct Markable<WTF::ObjectIdentifierGeneric<WebKit::PDFPluginIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>, WTF::ObjectIdentifierGeneric<WebKit::PDFPluginIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>::MarkableTraits> { struct ObjectIdentifierGeneric<WebKit::PDFPluginIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_value; } _pluginIdentifier;
    double _deviceScaleFactor;
    struct RetainPtr<CALayer> { void *m_ptr; } _layer;
    struct RetainPtr<CALayer> { void *m_ptr; } _activeLayer;
    struct RetainPtr<NSMutableDictionary<NSString *,NSImage *>> { void *m_ptr; } _cachedIcons;
    BOOL _visible;
    BOOL _mouseMovedToHUD;
    BOOL _initialHideTimerFired;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)layout;
- (void)_setVisible:(BOOL)a0;
- (BOOL)handleMouseDown:(id)a0;
- (BOOL)handleMouseUp:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseMoved:(id)a0;
- (void)_hideTimerFired;
- (id)_layerForEvent:(id)a0;
- (void)_loadIconImages;
- (id)_controlForEvent:(id)a0;
- (struct optional<unsigned long> { union { char x0; unsigned long long x1; } x0; BOOL x1; })_controlIndexForEvent:(id)a0;
- (id)_getImageForControlName:(id)a0;
- (void)_performActionForControl:(id)a0;
- (void)_redrawLayer;
- (void)_setLayerOpacity:(double)a0;
- (void)_setupLayer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pluginIdentifier:(struct ObjectIdentifierGeneric<WebKit::PDFPluginIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long x0; })a1 page:(void *)a2;
- (void)setDeviceScaleFactor:(double)a0;

@end
