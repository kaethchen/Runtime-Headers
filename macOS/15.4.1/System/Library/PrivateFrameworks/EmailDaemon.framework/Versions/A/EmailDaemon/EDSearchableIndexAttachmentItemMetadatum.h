@class NSString, UTType, NSURL, NSArray, NSDate;

@interface EDSearchableIndexAttachmentItemMetadatum : NSObject

@property (retain, nonatomic) UTType *contentType;
@property (readonly, nonatomic) NSURL *attachmentFileURL;
@property (readonly, nonatomic) BOOL canReadAttachmentFile;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSArray *mailboxIdentifiers;
@property (readonly, copy, nonatomic) NSString *messageIDHeader;
@property (readonly, copy, nonatomic) NSString *senderAddress;
@property (readonly, copy, nonatomic) NSArray *recipientAddresses;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) NSDate *dateSent;

- (void).cxx_destruct;
- (id)initWithAttachmentFileURL:(id)a0 name:(id)a1 domainIdentifier:(id)a2 accountIdentifier:(id)a3 mailboxIdentifiers:(id)a4 messageIDHeader:(id)a5 senderAddress:(id)a6 recipientAddresses:(id)a7 dateReceived:(id)a8 dateSent:(id)a9;

@end
