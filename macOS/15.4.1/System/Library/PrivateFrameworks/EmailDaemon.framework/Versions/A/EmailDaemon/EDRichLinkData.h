@class EDPersistedRichLinkID, NSString, NSURL, NSData;

@interface EDRichLinkData : NSObject

@property (readonly, nonatomic) EDPersistedRichLinkID *persistentID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithPersistentID:(id)a0 title:(id)a1 url:(id)a2 data:(id)a3;
- (id)initWithTitle:(id)a0 url:(id)a1 data:(id)a2;

@end
