@class NSString, NSMutableArray, NSObject;
@protocol OS_os_transaction, EXSAttachmentProcessingDelegate;

@interface EXSEWSAttachmentXPCRequest : NSObject {
    NSMutableArray *_requestIDs;
    NSObject<OS_os_transaction> *_transaction;
}

@property (weak, nonatomic) id<EXSAttachmentProcessingDelegate> delegate;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *attachmentUUID;

- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)addRequestID:(id)a0;
- (void)downloadProgressedTo:(unsigned long long)a0 of:(unsigned long long)a1;
- (id)initWithAccountID:(id)a0 attachmentUUID:(id)a1 delegate:(id)a2;

@end
