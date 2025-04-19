@class EWSExchangeServiceBinding, NSString, NSMutableDictionary, EXSDataManager, EXSAccount, EXSEWSSyncProtocol, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface EWSAttachmentManager : NSObject <EXSAttachmentProcessingDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *attachmentProcessingQueue;
@property (weak, nonatomic) EXSAccount *account;
@property (weak, nonatomic) EXSDataManager *dataManager;
@property (weak, nonatomic) EXSEWSSyncProtocol *syncProtocol;
@property (retain, nonatomic) EWSExchangeServiceBinding *attachmentBinding;
@property (retain, nonatomic) NSMutableDictionary *inFlightRequests;
@property (retain, nonatomic) NSMapTable *requestToClientMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void).cxx_destruct;
- (void)attachmentDownloadRequestWithID:(id)a0 attachmentUUID:(id)a1 responseManager:(id)a2;
- (void)refreshBindings;
- (void)attachmentDoneProcessing:(id)a0;
- (void)downloadFinishedForRequestID:(id)a0 error:(id)a1;
- (void)downloadProgressForRequestID:(id)a0 size:(id)a1 total:(id)a2;
- (void)fireDownloadCompleteForAttachmentWithRequestKey:(id)a0;
- (BOOL)fireEWSAttachmentOperation:(id)a0 error:(id *)a1;
- (id)initWithAccount:(id)a0 dataManager:(id)a1 syncProtocol:(id)a2;
- (BOOL)sendGetAttachmentRequest:(id)a0 withServerID:(id)a1;

@end
