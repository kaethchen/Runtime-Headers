@interface IMDMessageStorageContext : NSObject

@property (nonatomic) BOOL forceReplace;
@property (nonatomic) BOOL modifyError;
@property (nonatomic) BOOL modifyFlags;
@property (nonatomic) unsigned long long flagMask;
@property (nonatomic) BOOL updateMessageCache;
@property (nonatomic) BOOL calculateUnreadCount;
@property (nonatomic) BOOL reindexMessage;
@property (nonatomic, getter=isCloudImport) BOOL cloudImport;
@property (nonatomic, getter=isIncomingMessage) BOOL incomingMessage;
@property (nonatomic) long long reindexReason;

@end
