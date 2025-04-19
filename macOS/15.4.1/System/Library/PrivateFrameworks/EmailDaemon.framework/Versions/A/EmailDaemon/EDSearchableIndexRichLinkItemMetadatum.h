@class EDPersistedRichLinkID, NSString, NSArray, NSDate;

@interface EDSearchableIndexRichLinkItemMetadatum : NSObject

@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSArray *mailboxIdentifiers;
@property (readonly, copy, nonatomic) NSString *senderAddress;
@property (readonly, copy, nonatomic) NSArray *recipientAddresses;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) NSDate *dateSent;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) EDPersistedRichLinkID *richLinkID;
@property (readonly, copy, nonatomic) NSString *url;

- (void).cxx_destruct;
- (id)initWithDomainIdentifier:(id)a0 accountIdentifier:(id)a1 mailboxIdentifiers:(id)a2 senderAddress:(id)a3 recipientAddresses:(id)a4 dateReceived:(id)a5 dateSent:(id)a6 url:(id)a7 richLinkID:(id)a8 title:(id)a9;

@end
