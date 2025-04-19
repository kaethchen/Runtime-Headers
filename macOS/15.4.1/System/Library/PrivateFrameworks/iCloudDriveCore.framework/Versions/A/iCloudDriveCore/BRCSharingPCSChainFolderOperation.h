@class BRCItemID, NSString, BRCAppLibrary, BRCServerItem;
@protocol BRCSyncUpCallbackProtocol;

@interface BRCSharingPCSChainFolderOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    BRCServerItem *_serverItem;
    BRCAppLibrary *_appLibrary;
    unsigned long long _chainedRecordsCount;
    id<BRCSyncUpCallbackProtocol> _syncUpCallback;
}

@property (readonly, nonatomic) BRCItemID *rootItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)createActivity;
- (void)_performPCSChainBatch;
- (id)initWithItem:(id)a0 sessionContext:(id)a1 syncUpCallback:(id)a2;

@end
