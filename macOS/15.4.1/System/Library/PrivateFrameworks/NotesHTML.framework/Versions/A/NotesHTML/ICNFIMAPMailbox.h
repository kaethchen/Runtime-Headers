@class NSString, NSArray, NSMutableArray, ICNFIMAPGateway;
@protocol ICNFIMAPMailboxDelegate, ICNFMCMailbox;

@interface ICNFIMAPMailbox : NSObject {
    id<ICNFIMAPMailboxDelegate> _delegate;
    ICNFIMAPGateway *_selectedGateway;
    unsigned int _uidValidity;
    unsigned long long _exists;
    unsigned int _permanentFlags;
    BOOL _hasNewResponses;
    unsigned long long _allegedHighestModificationSequence;
    unsigned long long _computedHighestModificationSequence;
    BOOL _allegedHighestModificationSequenceHasBeenInitialized;
    BOOL _computedHighestModificationSequenceHasBeenInitialized;
}

@property (retain) id<ICNFMCMailbox> mailbox;
@property (nonatomic) unsigned int permanentFlags;
@property (copy) NSString *referenceName;
@property BOOL readOnly;
@property BOOL uidNotSticky;
@property (retain) ICNFIMAPGateway *selectedGateway;
@property (retain) NSArray *quotaRoots;
@property unsigned long long exists;
@property struct { long long count; unsigned long long size; } quotaUsage;
@property unsigned int uidNext;
@property unsigned int uidValidity;
@property unsigned int unseenCount;
@property unsigned long long computedHighestModificationSequence;
@property unsigned long long allegedHighestModificationSequence;
@property BOOL supportsModificationSequences;
@property (retain, nonatomic) NSMutableArray *unprocessedResponses;
@property BOOL hasNewResponses;

+ (BOOL)automaticallyNotifiesObserversOfAllegedHighestModificationSequence;
+ (BOOL)automaticallyNotifiesObserversOfExists;
+ (BOOL)automaticallyNotifiesObserversOfQuotaUsage;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)addResponse:(id)a0;
- (id)initWithMailboxName:(id)a0;
- (void)clearDelegate:(id)a0;
- (void)setTotalSize:(unsigned long long)a0 forQuotaMessageCount:(long long)a1;
- (void)setExists:(unsigned long long)a0 fromIDLE:(BOOL)a1;
- (id)removeResponse;

@end
