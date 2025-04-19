@class NSMutableArray, EMMessage, NSMutableSet;

@interface _EDCombinedMessageInfo : NSObject

@property (readonly, nonatomic) EMMessage *deduplicatedMessage;
@property (retain, nonatomic) EMMessage *message;
@property (nonatomic) long long lowestDatabaseID;
@property (retain, nonatomic) NSMutableSet *mailboxes;
@property (retain, nonatomic) NSMutableArray *flags;
@property (retain, nonatomic) NSMutableArray *dates;

- (id)init;
- (void).cxx_destruct;
- (void)addMessage:(id)a0 withDatabaseID:(long long)a1;
- (id)combinedDate;
- (id)combinedMailboxes;
- (id)combinedMessageFlags;

@end
