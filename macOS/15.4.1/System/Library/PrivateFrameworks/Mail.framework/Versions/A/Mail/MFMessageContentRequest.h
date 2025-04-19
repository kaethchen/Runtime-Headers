@class NSString, EMObjectID, EDMessageTransformer, MCMessage, NSObject, EMContentRequestOptions;
@protocol OS_os_log, EFScheduler, EMContentItemRequestDelegate;

@interface MFMessageContentRequest : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<EFScheduler> scheduler;
@property (retain, nonatomic) EMObjectID *objectID;
@property (retain, nonatomic) MCMessage *legacyMessage;
@property (retain, nonatomic) EDMessageTransformer *messageTransformer;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) EMContentRequestOptions *options;
@property (retain, nonatomic) id<EMContentItemRequestDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)onScheduler:(id)a0 requestContentForObjectID:(id)a1 legacyMessage:(id)a2 messageTransformer:(id)a3 clientIdentifier:(id)a4 options:(id)a5 delegate:(id)a6 completionHandler:(id /* block */)a7;

- (void).cxx_destruct;
- (id)_init;
- (id)_messageDataReconstitutedWithAttachments:(id)a0;
- (id)beginRequestWithCompletionHandler:(id /* block */)a0;
- (id)requestRawRepresentationWithCompletionHandler:(id /* block */)a0;

@end
