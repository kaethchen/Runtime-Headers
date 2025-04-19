@class UASharedPasteboardManager;

@interface UASharedPasteboard : NSObject

@property UASharedPasteboardManager *manager;

+ (void)initialize;
+ (void)localPasteboardDidAddData:(id)a0 toItemAtIndex:(unsigned long long)a1 generation:(unsigned long long)a2;
+ (id)remotePasteboard;
+ (void)clearLocalPasteboardInformation;
+ (void)stopPreventingPasteboardSharing;
+ (void)localPasteboardDidAddItems:(id)a0 forGeneration:(unsigned long long)a1;
+ (void)localPasteboardDidPasteGeneration:(unsigned long long)a0;
+ (void)startPreventingPasteboardSharing;

- (void)requestRemotePasteboardDataForProcess:(int)a0 withCompletion:(id /* block */)a1;
- (void)requestRemotePasteboardTypesForProcess:(int)a0 withCompletion:(id /* block */)a1;
- (id)currentRemoteDeviceName;
- (void)prefetchRemotePasteboardTypes:(id)a0;
- (BOOL)returnPasteboardDataBeforeArchives;

@end
