@interface IMKCurrencyInputMethod : IMKAbstractInputMethod

@property (readonly, nonatomic) struct __CFNumberFormatter { } *currencyFormatter;

+ (id)inputMethodVerbatimChainWithAttachedKeyboard:(id)a0 currencyFormatter:(struct __CFNumberFormatter { } *)a1;
+ (id)inputMethodVerbatimChainWithCurrencyFormatter:(struct __CFNumberFormatter { } *)a0;

- (void)dealloc;
- (BOOL)handleKeyPress:(id)a0 whileInKeyboardState:(id)a1;
- (id)initWithKeyboardToAttach:(id)a0 inputMethodToChain:(id)a1;
- (id)initWithKeyboardToAttach:(id)a0 inputMethodToChain:(id)a1 currencyFormatter:(struct __CFNumberFormatter { } *)a2;
- (BOOL)tracksVerbatim;

@end
