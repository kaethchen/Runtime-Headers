@class NSURL, ICAttachment, NSError;

@interface ICPaperAttachmentCreationHelper : NSObject

+ (void)copyNewPaperBundleToAttachment:(ICAttachment *)a0 fromURL:(NSURL *)a1 completionHandler:(void (^)(NSError *))a2;
+ (void)createPaperDocumentForAttachment:(ICAttachment *)a0 fromLegacyMediaAtURL:(NSURL *)a1 completionHandler:(void (^)(NSError *))a2;
+ (BOOL)createPaperDocumentForAttachment:(id)a0 fromLegacyMediaAtURL:(id)a1 error:(id *)a2;
+ (id)createSystemPaperAttachmentWithPKDrawing:(id)a0 inNote:(id)a1;

- (id)init;

@end
