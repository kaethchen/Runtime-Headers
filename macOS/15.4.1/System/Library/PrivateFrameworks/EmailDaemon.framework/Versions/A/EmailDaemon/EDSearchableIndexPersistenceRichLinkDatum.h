@class EDPersistedMessageID, EDPersistedRichLinkID, NSString;

@interface EDSearchableIndexPersistenceRichLinkDatum : NSObject

@property (readonly, copy, nonatomic) EDPersistedMessageID *messageID;
@property (readonly, copy, nonatomic) EDPersistedRichLinkID *richLinkID;
@property (readonly, nonatomic) long long mailboxID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *url;

- (void).cxx_destruct;
- (id)initWithMessageID:(id)a0 richLinkID:(id)a1 mailboxID:(long long)a2 title:(id)a3 url:(id)a4;

@end
