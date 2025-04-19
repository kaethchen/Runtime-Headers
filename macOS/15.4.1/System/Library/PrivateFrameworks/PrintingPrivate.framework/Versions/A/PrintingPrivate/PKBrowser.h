@class NSArray, PKPrinterBrowser, NSString, NSMutableArray;

@interface PKBrowser : NSObject <PKPrinterBrowserDelegate>

@property (retain) NSMutableArray *nearybyPKPrinters;
@property (retain) PKPrinterBrowser *pkPrinterBrowser;
@property unsigned long long browsingMask;
@property (readonly) NSArray *filteredDeviceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)stop;
- (void)addPrinter:(id)a0 moreComing:(BOOL)a1;
- (void)removePrinter:(id)a0 moreGoing:(BOOL)a1;

@end
