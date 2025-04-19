@class CHRecentCall, TUConversationLink, TUConversation;
@protocol TUSearchResult;

@interface DFRSelectedItem : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id<TUSearchResult> person;
@property (readonly, nonatomic) CHRecentCall *recent;
@property (readonly, nonatomic) TUConversation *ongoing;
@property (readonly, nonatomic) TUConversationLink *link;

+ (id)itemForOngoing:(id)a0;
+ (id)itemForLink:(id)a0;
+ (id)itemForPerson:(id)a0;
+ (id)itemForRecent:(id)a0;

- (void).cxx_destruct;
- (id)initWithPerson:(id)a0;
- (id)initWithLink:(id)a0;
- (id)initWithRecent:(id)a0;
- (id)initWithOngoing:(id)a0;

@end
