@class NSString;
@protocol EKUISummary;

@interface EKUISummaryTextButton : EKUIResizingTextField <NSAccessibilityButton>

@property (weak) id<EKUISummary> gadget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessibilityHelp;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (BOOL)allowsVibrancy;
- (BOOL)isAccessibilityElement;

@end
