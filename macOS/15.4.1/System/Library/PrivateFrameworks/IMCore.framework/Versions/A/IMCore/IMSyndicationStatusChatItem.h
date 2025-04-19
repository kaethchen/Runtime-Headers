@class NSString;

@interface IMSyndicationStatusChatItem : IMMessageStatusChatItem

@property (readonly, nonatomic) long long syndicationStatus;
@property (readonly, nonatomic) BOOL wasDetectedAsSWYSpam;
@property (readonly, copy, nonatomic) NSString *swyAppName;
@property (readonly, copy, nonatomic) NSString *swyBundleID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 withSyndicationStatus:(long long)a1 statusItemSequenceNumber:(unsigned long long)a2;
- (id)copyWithStatusItemSequenceNumber:(unsigned long long)a0;

@end
