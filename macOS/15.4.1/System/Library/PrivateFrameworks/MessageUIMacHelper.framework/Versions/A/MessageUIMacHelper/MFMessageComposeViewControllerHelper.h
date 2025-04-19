@class NSString, NSMutableDictionary, NSMutableArray, NSWindow;
@protocol MFMessageComposeViewControllerHelperDelegate;

@interface MFMessageComposeViewControllerHelper : NSObject <MFMessageComposeViewControllerHelper, NSSharingServiceDelegate>

@property (weak, nonatomic) NSWindow *appNSWindow;
@property (retain, nonatomic) NSMutableDictionary *parameters;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSMutableArray *attachments;
@property (weak, nonatomic) id<MFMessageComposeViewControllerHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformMessageSharingService;

- (id)init;
- (void).cxx_destruct;
- (void)setSubject:(id)a0;
- (void)setRecipients:(id)a0;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (void)setMessageBody:(id)a0;
- (void)_setCanEditRecipients:(BOOL)a0;
- (void)_setShouldIgnoreEmailsWhenSending:(BOOL)a0;
- (BOOL)addAttachmentURL:(id)a0 withAlternateFilename:(id)a1;
- (void)presentSheetOverWindow:(id)a0;
- (void)addAttachmentsForURL:(id)a0 alternateFilename:(id)a1;

@end
