@class NSView, NSString;

@interface SwiftUI.AppKitTouchBarItem : NSTouchBarItem {
    void /* unknown type, empty encoding */ itemContent;
    void /* unknown type, empty encoding */ hostView;
}

@property (nonatomic, readonly) NSView *view;
@property (nonatomic, readonly) NSString *customizationLabel;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;

@end
