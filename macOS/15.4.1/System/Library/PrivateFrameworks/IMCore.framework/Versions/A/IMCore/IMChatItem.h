@class NSString, IMItem;

@interface IMChatItem : NSObject <NSCopying>

@property (retain, nonatomic) IMItem *item;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canReply;
@property (readonly, nonatomic) BOOL canRetract;
@property (readonly, nonatomic) BOOL canEditMessageText;
@property (readonly, nonatomic) BOOL supportsCommunicationSafety;
@property (readonly, nonatomic) NSString *commSafetyTransferGUID;
@property (readonly, nonatomic) long long fileTransferReloadStatus;
@property (readonly, retain, nonatomic) NSString *balloonBundleID;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) long long syndicationBehavior;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) long long syndicationType;
@property (readonly, nonatomic) BOOL wasDetonated;
@property (readonly, nonatomic) NSString *itemGUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_item;
- (id)_initWithItem:(id)a0;
- (void)setNeedsReloadForTransferStatusChangeWithType:(long long)a0;
- (id)_parentItem;
- (void)_setTimeAdded:(id)a0;
- (id)_timeAdded;
- (id)_timeStale;
- (BOOL)isEditedMessageHistory;
- (BOOL)isReplyContextPreview;
- (BOOL)itemIsReply;
- (BOOL)itemIsReplyContextPreview;
- (BOOL)itemIsReplyCount;
- (BOOL)itemIsThreadOriginator;
- (BOOL)itemIsThreadOriginatorWithThreadIdentifier:(id *)a0;
- (id)threadGroupIdentifier;

@end
