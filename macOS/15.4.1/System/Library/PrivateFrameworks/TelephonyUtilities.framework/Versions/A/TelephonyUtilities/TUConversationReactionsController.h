@class NSString, NSHashTable;
@protocol TUConversationManagerDataSource;

@interface TUConversationReactionsController : NSObject <TUConversationReactionsControllerDataSourceDelegate>

@property (readonly, nonatomic) id<TUConversationManagerDataSource> dataSource;
@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (id)initWithConversationDataSource:(id)a0;
- (void)conversation:(id)a0 participant:(id)a1 didReact:(id)a2;
- (void)conversation:(id)a0 participantDidStopReacting:(id)a1;

@end
