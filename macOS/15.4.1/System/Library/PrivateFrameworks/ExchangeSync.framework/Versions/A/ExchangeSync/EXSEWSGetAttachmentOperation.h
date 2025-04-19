@class EXSAccount, NSArray, NSMutableDictionary, EXSDataManager, EWSExchangeServiceBinding;
@protocol EXSAttachmentProcessingDelegate;

@interface EXSEWSGetAttachmentOperation : EXSEWSOperation {
    NSMutableDictionary *_serverIdsToAttachmentUUIDs;
    EXSAccount *_account;
}

@property (nonatomic) unsigned long long dataLength;
@property (weak, nonatomic) EXSDataManager *dataManager;
@property (weak, nonatomic) id<EXSAttachmentProcessingDelegate> delegate;
@property (weak, nonatomic) EWSExchangeServiceBinding *attachmentBinding;
@property (retain, nonatomic) NSArray *attachmentRequestKeys;

+ (id)log;

- (void).cxx_destruct;
- (void)_saveAttachmentWithServerId:(id)a0 tempFile:(id)a1;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;
- (id)initWithDataManager:(id)a0 account:(id)a1 attachmentManager:(id)a2 andBinding:(id)a3;
- (id)initWithProtocol:(id)a0 account:(id)a1;

@end
