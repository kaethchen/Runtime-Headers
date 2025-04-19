@class NSString, NSMutableArray, NSMutableDictionary;

@interface BRCUploadAllFilesTrackerOperation : _BRCFrameworkOperation <BRCAllItemsDidUploadTracker, BRCOperationSubclass> {
    NSMutableArray *_zonesStillUploading;
    NSMutableArray *_hiddenZoneWithError;
    NSMutableDictionary *_perContainerIDError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (void)clientZone:(id)a0 didFinishUploadingAllItemsWithError:(id)a1;
- (id)initWithSessionContext:(id)a0 appLibraries:(id)a1;

@end
