@class NSString;

@interface EKMailServiceEmailSender : NSObject <EKEmailSender>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)sendEmailFromAddress:(id)a0 toRecipients:(id)a1 withSubject:(id)a2 withBody:(id)a3 withAttachment:(id)a4 attachmentFilename:(id)a5;

@end
