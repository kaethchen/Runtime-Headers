@class NSString, NSWindow, NSMutableDictionary;
@protocol MFMailComposeViewControllerHelperDelegate;

@interface MFMailComposeViewControllerHelper : NSObject <MFMailComposeViewControllerHelper, NSSharingServiceDelegate>

@property (weak, nonatomic) NSWindow *appNSWindow;
@property (retain, nonatomic) NSMutableDictionary *parameters;
@property (retain, nonatomic) NSString *body;
@property (weak, nonatomic) id<MFMailComposeViewControllerHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)setSubject:(id)a0;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (void)setToRecipients:(id)a0;
- (void)setBccRecipients:(id)a0;
- (void)setCcRecipients:(id)a0;
- (void)addAttachmentData:(id)a0 mimeType:(id)a1 fileName:(id)a2;
- (void)presentSheetOverWindow:(id)a0;
- (void)setHideMyEmailFrom:(id)a0;
- (void)setMessageBody:(id)a0 isHTML:(BOOL)a1;
- (void)setPreferredSendingEmailAddress:(id)a0;

@end
