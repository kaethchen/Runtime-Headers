@class NSString;
@protocol SOUnreadCountHelperDelegate;

@interface SOUnreadCountHelper : SOHelper <SOUnreadCountHelperReceiverProtocol>

@property (readonly, nonatomic) unsigned long long unreadCount;
@property (weak, nonatomic) id<SOUnreadCountHelperDelegate> unreadCountDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bundleName;
+ (id)weakSharedInstance;
+ (id)receiverProtocol;
+ (id)remoteReceiverProtocol;

- (void).cxx_destruct;
- (void)updateProperties:(id)a0;
- (void)_calculateTotalUnreadCount;
- (void)_postUnreadChatNotificationForChatGUID:(id)a0;
- (void)_postUnreadCountNotificationForChatGUID:(id)a0;
- (void)markChatGUIDAsRead:(id)a0;
- (void)processUnreadCountForChatGUID:(id)a0 withBlock:(id /* block */)a1;
- (void)setValue:(id)a0 forControllerKey:(id)a1;
- (void)setupConnection:(id)a0;
- (unsigned long long)totalUnreadCount;
- (id)unreadChats;
- (id)unreadChatsBlocking;
- (unsigned long long)unreadCountForChatGUID:(id)a0;
- (id)unreadFormatForParticipants:(long long)a0 andUnreadCount:(id)a1;

@end
