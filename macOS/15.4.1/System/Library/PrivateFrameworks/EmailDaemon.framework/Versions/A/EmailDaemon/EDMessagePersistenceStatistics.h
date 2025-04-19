@interface EDMessagePersistenceStatistics : NSObject

@property (nonatomic) double start;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long messages;
@property (nonatomic) unsigned long long messageData;
@property (nonatomic) unsigned long long messagesDeleted;
@property (nonatomic) unsigned long long messageDataDeleted;

@end
