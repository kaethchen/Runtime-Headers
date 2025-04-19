@class NSString, ELSManager, DEDCloudKitAttachmentGroupModel, NSMutableDictionary, DEDCloudKitClient, NSDictionary, NSMutableArray, NSObject, DEDBugSession;
@protocol OS_os_log;

@interface DEDCloudKitFinisher : NSObject <DEDFinisher, DEDFinisherState, NSSecureCoding, DEDSecureArchiving>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long state;
@property (weak) DEDBugSession *session;
@property (retain) NSObject<OS_os_log> *log;
@property unsigned long long totalUploadSize;
@property (retain) DEDCloudKitAttachmentGroupModel *attachmentGroupModel;
@property (retain) NSMutableArray *attachments;
@property (retain) NSMutableDictionary *uploadedBytes;
@property (retain, nonatomic) DEDCloudKitClient *cloudKitClient;
@property (retain, nonatomic) NSDictionary *queuePayload;
@property (retain, nonatomic) NSString *timberLorryUUID;
@property (nonatomic) BOOL sandboxEnvironment;
@property (retain, nonatomic) ELSManager *elsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isUploading;
- (id)createAttachmentModelWithURL:(id)a0 andQueueItem:(id)a1 attachmentGroupModel:(id)a2;
- (id)parsePayloadData:(id)a0 forIdentifier:(id)a1;
- (void)didCancelCollectionOnExtension:(id)a0;
- (id)additionalStateInfo;
- (void)createAttachmentGroupStatusForAttachmentGroup:(id)a0 completionHandler:(id /* block */)a1;
- (id)createAttachmentGroupStatusWithAttachmentGroupModel:(id)a0;
- (id)createAttachmentGroupWithData:(id)a0;
- (void)didCollectAttachmentGroup:(id)a0;
- (void)didFinishAllCollections;
- (void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)a0;
- (id)encryptLogsForExtensionIdentifier:(id)a0 withAttachmentUrl:(id)a1;
- (id)encryptLogsIfNecessary:(id)a0;
- (id)extractExtensionIdentifierFromAttachmentUrl:(id)a0;
- (void)finishSession:(id)a0 withConfiguration:(id)a1;
- (id)getAttachmentURLs;
- (id)getAttachmentURLsWithProgressHandler:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 session:(id)a1;
- (BOOL)isCompressing;
- (void)localCleanup;
- (void)processAttachmentsWithRecord:(id)a0 withProgress:(double)a1;
- (void)uploadAttachments:(id)a0 inAttachmentGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeData:(id)a0 filename:(id)a1;

@end
