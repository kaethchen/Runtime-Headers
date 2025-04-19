@class NSString, NSMutableArray, ISServiceProxy;

@interface ISPropertyListProvider : ISDataProvider <ISOperationDelegate> {
    BOOL _shouldRedirectOnGotoAction;
}

@property (readonly) ISServiceProxy *serviceProxy;
@property BOOL shouldProcessAccount;
@property BOOL shouldProcessDialogs;
@property (readonly) BOOL didProcessDialog;
@property BOOL shouldProcessProtocol;
@property BOOL shouldProcessDownloads;
@property BOOL shouldProcessDownloadsForUpToDate;
@property (readonly) NSMutableArray *upToDateDownloadItemIDs;
@property BOOL shouldTriggerDownloads;
@property (copy) id /* block */ actionHandler;
@property (copy) id /* block */ gotoActionHandler;
@property (retain) NSString *touchIDChallenge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStoreClient:(id)a0;
- (BOOL)processPropertyList:(id)a0 returningError:(id *)a1;
- (void)_processActions:(id)a0 fallback:(id)a1;
- (void)_processDownloads:(id)a0 fallback:(id)a1;
- (void)_processPingsInDictionary:(id)a0;
- (BOOL)_processStoreVersion:(id)a0 returningError:(id *)a1;
- (void)_processTriggerDownload:(id)a0 fallback:(id)a1;
- (void)operation:(id)a0 selectedButton:(id)a1;
- (BOOL)parseData:(id)a0 returningError:(id *)a1;
- (BOOL)processDialogFromPropertyList:(id)a0 returningError:(id *)a1;

@end
