@class NSString, NSDate;
@protocol ICNFIMAPAccount;

@interface ICNFIMAPMessage : ICNFMCRemoteMessage <ICNFIMAPMessage> {
    unsigned int _uid;
}

@property (readonly, nonatomic) id<ICNFIMAPAccount> account;
@property (nonatomic) unsigned int uid;
@property (readonly, copy, nonatomic) NSString *messageID;
@property BOOL isPartial;
@property BOOL partsHaveBeenCached;
@property BOOL hasTemporaryUid;
@property (readonly) struct { unsigned int x0 : 27; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } remoteFlags;
@property (readonly) unsigned long long messageSize;
@property (readonly, copy) NSString *subject;
@property (readonly, copy) NSDate *dateReceived;
@property (readonly, copy, nonatomic) NSString *mailboxName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)dataSource;
- (void)setDataSource:(id)a0;
- (id)remoteID;
- (BOOL)isMessageContentLocallyAvailable;
- (id)initWithFlags:(unsigned int)a0 size:(unsigned long long)a1 uid:(unsigned int)a2;
- (id)remoteMailboxURLString;
- (id)originalMailboxURLString;

@end
