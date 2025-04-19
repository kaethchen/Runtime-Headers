@protocol TUSimulatedConversationControllerDataSource;

@interface TUSimulatedConversationController : NSObject

@property (readonly, nonatomic) id<TUSimulatedConversationControllerDataSource> dataSource;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)addRemoteParticipantWithHandle:(id)a0 update:(id)a1 toConversation:(id)a2;
- (void)createIncomingConversationWithHandles:(id)a0;
- (void)removeRemoteParticipant:(id)a0 fromConversation:(id)a1;
- (void)updateParticipant:(id)a0 withUpdate:(id)a1 onConversation:(id)a2;

@end
