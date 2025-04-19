@class NSString;

@interface EDSearchableRichLink : NSObject {
    void /* unknown type, empty encoding */ _underlying;
}

@property (class, nonatomic, readonly) NSString *idAttributeKey;
@property (class, nonatomic, readonly) NSString *titleAttributeKey;
@property (class, nonatomic, readonly) NSString *urlAttributeKey;

- (id)init;
- (void).cxx_destruct;
- (void)addToAttributes:(id)a0;
- (id)initWithAccountIdentifier:(id)a0 mailboxIdentifiers:(id)a1 messageID:(id)a2 id:(id)a3 title:(id)a4 url:(id)a5 dateSent:(id)a6 dateReceived:(id)a7 sender:(id)a8 recipients:(id)a9;

@end
