@interface CalEmailProvider : NSObject

+ (void)composeEmailTo:(id)a0 withCCRecipients:(id)a1 withSubject:(id)a2 withBody:(id)a3 from:(id)a4;
+ (void)composeEmailTo:(id)a0 withSubject:(id)a1 withBody:(id)a2 from:(id)a3;
+ (void)composeEmailTo:(id)a0 withSubject:(id)a1 withBody:(id)a2 from:(id)a3 delegate:(id)a4;
+ (void)composeEmailTo:(id)a0 withSubject:(id)a1 withBody:(id)a2 from:(id)a3 withAttachment:(id)a4 andAttachmentFilename:(id)a5;
+ (void)composeEmailTo:(id)a0 withSubject:(id)a1 withBody:(id)a2 from:(id)a3 withAttachment:(id)a4 andAttachmentFilename:(id)a5 delegate:(id)a6;

@end
