@class NSString, CKRecordID, NSError;

@interface BRCSharingCopyParticipantTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    CKRecordID *_shareID;
    CKRecordID *_contentRecordID;
    NSString *_participantDocumentToken;
    NSString *_participantKey;
    NSString *_baseToken;
    NSError *_error;
    BOOL _iWorkShareable;
    BOOL _isChildOfShare;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)createActivity;
- (void)_completeWithResult:(id)a0 participantKey:(id)a1;
- (void)_fetchBaseTokenWithCompletion:(id /* block */)a0;
- (void)_fetchParticipantDocumentTokenWithCompletion:(id /* block */)a0;
- (void)_fetchParticipantKeyWithCompletion:(id /* block */)a0;
- (id)initWithItem:(id)a0 sessionContext:(id)a1;

@end
