@class NSString, _AMMailMailbox, _AMMailRichText, NSDate;

@interface _AMMailMessage : SBObject

@property (readonly, copy) NSString *allHeaders;
@property int backgroundColor;
@property (copy) _AMMailMailbox *mailbox;
@property (readonly, copy) _AMMailRichText *content;
@property (readonly, copy) NSDate *dateReceived;
@property (readonly, copy) NSDate *dateSent;
@property BOOL deletedStatus;
@property BOOL flaggedStatus;
@property BOOL junkMailStatus;
@property BOOL readStatus;
@property (readonly, copy) NSString *messageId;
@property (readonly, copy) NSString *source;
@property (readonly, copy) NSString *replyTo;
@property (readonly) long long messageSize;
@property (readonly, copy) NSString *sender;
@property (readonly, copy) NSString *subject;
@property (readonly) BOOL wasForwarded;
@property (readonly) BOOL wasRedirected;
@property (readonly) BOOL wasRepliedTo;

- (id)recipients;
- (void)delete;
- (void)bounce;
- (void)moveTo:(id)a0;
- (id)headers;
- (long long)id;
- (id)bccRecipients;
- (id)ccRecipients;
- (id)toRecipients;
- (id)mailAttachments;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (id)forwardOpeningWindow:(BOOL)a0;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (id)redirectOpeningWindow:(BOOL)a0;
- (id)replyOpeningWindow:(BOOL)a0 replyToAll:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
