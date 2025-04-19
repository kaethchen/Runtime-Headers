@interface ADMPrinterSharingConfig : NSObject

+ (id)sharedPrinterSharing;

- (BOOL)canSeeNetworkPrinters;
- (BOOL)isPrinterSharingOn;
- (void)setCanSeeNetworkPrinters:(BOOL)a0;
- (void)setPrinterSharingEnabled:(BOOL)a0;

@end
