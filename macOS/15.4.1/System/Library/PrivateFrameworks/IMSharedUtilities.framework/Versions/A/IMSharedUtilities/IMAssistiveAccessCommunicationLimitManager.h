@class NSArray;

@interface IMAssistiveAccessCommunicationLimitManager : NSObject

@property (class, readonly, nonatomic) IMAssistiveAccessCommunicationLimitManager *sharedManager;

@property (readonly, nonatomic) BOOL isAssistiveAccessRunning;
@property (readonly, nonatomic) BOOL shouldFilterIncomingMessages;
@property (readonly, nonatomic) BOOL shouldFilterOutgoingMessages;
@property (readonly, nonatomic) NSArray *favoriteHandleStrings;

- (BOOL)allowsConversationWithHandleIDs:(id)a0;
- (BOOL)allowsSendingToHandleIDs:(id)a0;

@end
