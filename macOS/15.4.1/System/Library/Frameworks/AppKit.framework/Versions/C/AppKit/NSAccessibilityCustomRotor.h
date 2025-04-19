@class NSString;
@protocol NSAccessibilityCustomRotorItemSearchDelegate, NSAccessibilityElementLoading;

@interface NSAccessibilityCustomRotor : NSObject {
    id<NSAccessibilityCustomRotorItemSearchDelegate> _itemSearchDelegate;
    id<NSAccessibilityElementLoading> _itemLoadingDelegate;
}

@property long long type;
@property (copy) NSString *label;
@property (weak) id<NSAccessibilityCustomRotorItemSearchDelegate> itemSearchDelegate;
@property (weak) id<NSAccessibilityElementLoading> itemLoadingDelegate;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_defaultLabelForType:(long long)a0;
- (id)initWithLabel:(id)a0 itemSearchDelegate:(id)a1;
- (id)initWithRotorType:(long long)a0 itemSearchDelegate:(id)a1;
- (id)itemLoadingDelegate;
- (id)itemSearchDelegate;
- (void)setItemLoadingDelegate:(id)a0;
- (void)setItemSearchDelegate:(id)a0;

@end
