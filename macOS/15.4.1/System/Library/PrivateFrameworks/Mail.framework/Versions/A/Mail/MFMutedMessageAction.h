@class EDMessageChangeManager, MFMessageStore, NSArray, NSString, NSObject;
@protocol OS_os_log;

@interface MFMutedMessageAction : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) MFMessageStore *store;
@property (retain, nonatomic) NSArray *mutedMessages;
@property (readonly, nonatomic) EDMessageChangeManager *changeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performAction;
- (id)initWithMessages:(id)a0 changeManager:(id)a1;
- (void)performActionWithChangeManager:(id)a0;
- (void)_setMutedMessagesFromMessages:(id)a0;
- (id)initWithMessages:(id)a0 store:(id)a1;
- (void)performActionWithStore:(id)a0;

@end
