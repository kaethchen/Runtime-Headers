@class NSMutableArray, EDMailboxProvider, NSMutableSet;
@protocol EDPersistedMessage;

@interface _EDMessageDuplicateInfo : NSObject

@property (retain, nonatomic) EDMailboxProvider *mailboxProvider;
@property (retain, nonatomic) id<EDPersistedMessage> primaryPersistedMessage;
@property (retain, nonatomic) NSMutableSet *mailboxes;
@property (retain, nonatomic) NSMutableArray *flags;
@property (retain, nonatomic) NSMutableArray *dates;

- (void).cxx_destruct;
- (void)addMessage:(id)a0;
- (id)combinedDate;
- (id)combinedMailboxes;
- (id)combinedMessageFlags;
- (id)initWithMailboxProvider:(id)a0;

@end
