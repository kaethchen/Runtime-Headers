@class NSString, NSColor;

@interface MUTextFactoidViewModel : MUFactoidViewModel {
    BOOL _shouldReverseForRTLLayout;
    NSString *_symbolName;
    NSString *_titleString;
    NSString *_valueString;
    NSColor *_symbolColor;
    NSColor *_darkSymbolColor;
}

- (void).cxx_destruct;
- (id)symbolName;
- (id)valueString;
- (id)symbolColor;
- (id)titleString;
- (id)darkSymbolColor;
- (id)buildSymbolWithFont:(id)a0;
- (id)initWithTitle:(id)a0 valueString:(id)a1 symbolName:(id)a2 symbolColor:(id)a3 darkSymbolColor:(id)a4 shouldReverseForRTLLayout:(BOOL)a5;
- (BOOL)shouldReverseForRTLLayout;

@end
