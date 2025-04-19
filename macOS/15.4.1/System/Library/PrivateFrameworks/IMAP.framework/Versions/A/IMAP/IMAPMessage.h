@class NSString, ECSubject, NSDate;
@protocol IMAPAccount, IMAPMessageDataSource;

@interface IMAPMessage : MCRemoteMessage <IMAPMessage> {
    unsigned int _uid;
}

@property (readonly, nonatomic) id<IMAPAccount> account;
@property (readonly, nonatomic) long long originalFlags;
@property unsigned int uid;
@property (readonly) id<IMAPMessageDataSource> dataSource;
@property (readonly, copy, nonatomic) NSString *messageID;
@property BOOL isPartial;
@property BOOL partsHaveBeenCached;
@property (readonly) unsigned long long messageSize;
@property (readonly, copy) ECSubject *subject;
@property (readonly) NSDate *dateReceived;
@property (readonly, copy, nonatomic) NSString *mailboxName;
@property (readonly, nonatomic) BOOL hasAttachments;
@property (readonly, nonatomic) BOOL shouldDeferBodyDownload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)setDataSource:(id)a0;
- (id)remoteID;
- (BOOL)isMessageContentLocallyAvailable;
- (id)initWithFlags:(long long)a0 size:(unsigned long long)a1 uid:(unsigned int)a2;
- (id)remoteMailboxURLString;

@end
