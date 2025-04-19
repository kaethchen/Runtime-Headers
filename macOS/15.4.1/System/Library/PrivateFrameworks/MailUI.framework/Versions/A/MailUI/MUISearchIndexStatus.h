@interface MUISearchIndexStatus : NSObject

@property (nonatomic) BOOL isPaused;
@property (nonatomic) unsigned long long messagesIndexed;
@property (nonatomic) unsigned long long totalMessages;
@property (readonly, nonatomic) unsigned long long messagesInLargestRemoteAccount;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) float progress;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithMessagesIndexed:(unsigned long long)a0 totalMessages:(unsigned long long)a1 messagesInLargestRemoteAccount:(unsigned long long)a2 paused:(BOOL)a3;

@end
