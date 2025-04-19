@class NSMutableArray;
@protocol MFMessageConsumer;

@interface _MFMessageLoadingContext : NSObject

@property (retain, nonatomic) NSMutableArray *messages;
@property (retain, nonatomic) id<MFMessageConsumer> target;
@property (nonatomic) unsigned long long chunkSize;
@property (nonatomic) double chunkInterval;
@property (nonatomic) double lastChunkSentTime;
@property (nonatomic) unsigned long long messagesLoaded;
@property (nonatomic) unsigned int options;
@property (nonatomic) struct sqlite3 { } *database;
@property (nonatomic) long long countOfMessagesProcessed;

- (id)description;
- (void).cxx_destruct;

@end
