@class NSString, CKRecord, NSProgress;

@interface BRCCollaborationUploadOperation : _BRCOperation <BRCOperationSubclass> {
    CKRecord *_record;
    NSProgress *_progress;
}

@property (copy) id /* block */ uploadCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (id)initWithRecord:(id)a0 progress:(id)a1 syncContext:(id)a2 sessionContext:(id)a3;

@end
