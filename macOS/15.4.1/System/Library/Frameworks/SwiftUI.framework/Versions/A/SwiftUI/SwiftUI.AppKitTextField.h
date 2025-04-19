@class NSString;

@interface SwiftUI.AppKitTextField : NSTextField {
    void /* unknown type, empty encoding */ swiftUIDelegate;
    void /* unknown type, empty encoding */ suggestionsBridge;
    void /* unknown type, empty encoding */ selectionStorage;
    void /* unknown type, empty encoding */ cachedIdealWidth;
    void /* unknown type, empty encoding */ upperLimit;
    void /* unknown type, empty encoding */ lowerLimit;
    void /* unknown type, empty encoding */ delegateFocusEffect;
    void /* unknown type, empty encoding */ customAcceptsFirstMouse;
}

@property (class, nonatomic) Class cellClass;

@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)textView:(id)a0 menu:(id)a1 forEvent:(id)a2 atIndex:(long long)a3;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilitySharedFocusElements;
- (id)designatedFocusRingView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (void)viewWillMoveToWindow:(id)a0;

@end
