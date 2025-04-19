@class NSString;

@interface SwiftUI.SwiftUITabViewItem : NSTabViewItem {
    void /* unknown type, empty encoding */ accessibility;
    void /* unknown type, empty encoding */ resolvedAccessibilityLabel;
}

@property (nonatomic, readonly) NSString *accessibilityTitleAttribute;
@property (nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic, readonly) NSString *accessibilityIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;

@end
