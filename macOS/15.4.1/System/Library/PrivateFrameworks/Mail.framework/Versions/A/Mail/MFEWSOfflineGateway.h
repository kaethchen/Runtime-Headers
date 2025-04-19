@class NSMutableDictionary, MFEWSResponseOperation, MFEWSConnection, NSString, NSOperationQueue;

@interface MFEWSOfflineGateway : MFEWSGateway <NSKeyedUnarchiverDelegate> {
    NSMutableDictionary *_offlineToRealEWSIdStrings;
    id _offlineToRealEWSIdStringsLock;
    NSOperationQueue *_requestResponseQueue;
}

@property (retain) MFEWSConnection *offlineConnection;
@property (retain) MFEWSResponseOperation *lastResponseDecoded;
@property (retain, nonatomic) NSMutableDictionary *offlineToRealEWSIdStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingRequestResponseQueue;

- (void).cxx_destruct;
- (id)connection;
- (id)initWithCoder:(id)a0;
- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
- (id)unarchiver:(id)a0 didDecodeObject:(id)a1;
- (id)initWithAccount:(id)a0;
- (void)addRequest:(id)a0;
- (id)_EWSFolderFromCreateRequestOperation:(id)a0;
- (id)_deleteRequestRemovingUndeletedItems:(id)a0;
- (void)_moveMessageFromFailedCreateRequest:(id)a0 withBackupManager:(id)a1 toMailboxNamed:(id)a2 actualName:(id *)a3;
- (void)_undeleteMessagesFromFailedCopyRequest:(id)a0;
- (void)_undeleteMessagesFromFailedDeleteRequest:(id)a0;
- (void)addOfflineToRealEWSIdStrings:(id)a0 forRequest:(id)a1;
- (id)initWithAccount:(id)a0 connection:(id)a1;
- (id)playbackRequests:(id)a0 offlineToRealEWSIdStrings:(id *)a1 error:(id *)a2;
- (id)requestResponseQueue;
- (id)resolvedIdStringForIdString:(id)a0;
- (void)takeRequestOffline:(id)a0 error:(id)a1;

@end
