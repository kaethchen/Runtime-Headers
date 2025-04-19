@class MADPersonIdentificationRequest, _CDInteractionStore, NSXPCConnection, NSDate, NSString;

@interface _PSMediaAnalysisProcessingTask : NSObject {
    NSXPCConnection *_connection;
    _CDInteractionStore *_interactionStore;
    MADPersonIdentificationRequest *_personIdentificationRequest;
    NSDate *_bookmark;
    NSString *_mediaAnalysisConfigurationPath;
}

+ (id)interactionStore;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)attachmentsContainsPersonId:(id)a0;
- (void)executeTaskWithCompletionHandler:(id /* block */)a0;
- (id)initWithBookmark:(id)a0 interactionStore:(id)a1;
- (void)saveBookmark;
- (BOOL)skipAttachmentProcessing:(id)a0;
- (BOOL)updatePlistWithDict:(id)a0;
- (id)updatedAttachmentsWithPeopleIdForAttachments:(id)a0 forBundleID:(id)a1;

@end
