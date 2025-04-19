@class NSObject;
@protocol _TtP7SwiftUI36PlatformAccessibilityElementProtocol_;

@interface SwiftUI.AppKitScrollView : NSScrollView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_helper;
    void /* unknown type, empty encoding */ isTracking;
    void /* unknown type, empty encoding */ isScrollEnabled;
    void /* unknown type, empty encoding */ customAcceptsFirstMouse;
    void /* unknown type, empty encoding */ isDocumentAccessibilityHost;
    void /* unknown type, empty encoding */ ancestorScrollableAxes;
    void /* unknown type, empty encoding */ descendantScrollableAxes;
}

@property (nonatomic, readonly) BOOL relaxRegistrationRequirements;
@property (nonatomic, readonly) NSObject<_TtP7SwiftUI36PlatformAccessibilityElementProtocol_> *knownRepresentedElement;
@property (nonatomic, readonly) BOOL _usesOverlayScrollers;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollWheel:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;

@end
