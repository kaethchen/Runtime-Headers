@class NSXPCListener, NSArray;

@interface PKDefaults : NSObject

@property (class, retain) NSXPCListener *listenerProxy;
@property (class, retain) NSArray *iCloudPrinters;
@property (class, readonly) NSArray *iCloudPrintersSync;

+ (void)addPrinterToiCloud:(id)a0 displayName:(id)a1;
+ (id)absoluteSpoolDirectory;
+ (void)addLastUsedPrinter:(id)a0 duplexMode:(id)a1 lastUsedSize:(struct CGSize { double x0; double x1; })a2 forPhoto:(BOOL)a3;
+ (void)addPrinterToiCloud:(id)a0 displayName:(id)a1 location:(id)a2;
+ (BOOL)airPrintBeaconDiscoveryAllowed;
+ (void)getUpdatediCloudPrintersFromPrinterTool;
+ (BOOL)ippsIsRequired;
+ (id)lastUsedPrinters;
+ (void)lastUsedPrintersCompletionHandler:(id /* block */)a0;
+ (id)lastUsedPrintersForPhoto:(BOOL)a0;
+ (void)lastUsedPrintersForPhoto:(BOOL)a0 completionHandler:(id /* block */)a1;
+ (BOOL)mcProfilePrintersOnlyAllowed;
+ (void)removePrinterFromiCloud:(id)a0;
+ (id)requiredPDL;
+ (void)resetPKCloudData;
+ (void)seenPrintersCompletionHandler:(id /* block */)a0;
+ (void)startiCloudListening;
+ (void)updateiCloudPrinterDisplayName:(id)a0 displayName:(id)a1;
+ (void)updateiCloudPrinterLocation:(id)a0 location:(id)a1;
+ (BOOL)urfIsOptional;
+ (BOOL)uriMatchesMCProfileAdded:(id)a0;

@end
