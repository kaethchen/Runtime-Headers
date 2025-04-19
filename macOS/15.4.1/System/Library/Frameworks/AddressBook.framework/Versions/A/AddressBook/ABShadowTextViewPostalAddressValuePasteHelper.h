@class NSView;
@protocol ABCardCollectionRowView;

@interface ABShadowTextViewPostalAddressValuePasteHelper : NSObject

@property (weak, nonatomic) NSView<ABCardCollectionRowView> *datumView;

+ (BOOL)pasteString:(id)a0 intoAddressDatumView:(id)a1;

- (void).cxx_destruct;
- (void)setAddress:(id)a0;
- (id)initWithAddressDatumView:(id)a0;
- (void)setValue:(id)a0 onFieldWithTag:(long long)a1;

@end
