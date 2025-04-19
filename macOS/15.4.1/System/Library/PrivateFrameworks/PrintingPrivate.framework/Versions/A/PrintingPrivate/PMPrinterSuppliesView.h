@class NSDictionary, NSView;

@interface PMPrinterSuppliesView : NSStackView

@property (retain, nonatomic) NSDictionary *suppliesDict;
@property (weak) NSView *supplyInfoView;
@property struct OpaquePMPrinter { } *printer;

- (void)dealloc;
- (void).cxx_destruct;
- (id)supplyBarColor:(id)a0;
- (id)warningToolTip:(id)a0;
- (void)addSupplyWithDict:(id)a0;
- (id)disclaimerSuppliesString;
- (void)setSuppliesInfo:(id)a0;
- (void)suppliesInfoButtonClicked:(id)a0;

@end
