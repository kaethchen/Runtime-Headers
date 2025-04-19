@interface OITSUMacPrintUtilities : NSObject

+ (id)paperNameWithPrinterID:(id)a0 paperID:(id)a1;
+ (struct CGSize { double x0; double x1; })pageSizeForPaperID:(id)a0 printerID:(id)a1;
+ (id)paperIDForPageSize:(struct CGSize { double x0; double x1; })a0 printerID:(id)a1;
+ (id)printerIDForPrinterName:(id)a0;
+ (id)printerWithPrinterID:(id)a0;

@end
