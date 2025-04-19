@class CNContactStore, CNContact, NSString, NSOperationQueue, NSMutableDictionary, NSObject, CNAvatarCache;
@protocol OS_os_log;

@interface MCContactsManager : NSObject <EFLoggable> {
    NSMutableDictionary *_contactsCache;
    NSObject *_contactsCacheLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) NSOperationQueue *contactsUpdateQueue;
@property (readonly, copy, nonatomic) CNContact *meContact;
@property (readonly, nonatomic) CNAvatarCache *avatarCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)_defaultKeyDescriptors;
+ (void)test_resetSharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_contactsChanged:(id)a0;
- (void)test_tearDown;
- (void)fetchContactForAddress:(id)a0 withCompletion:(id /* block */)a1;
- (id)contactForAddress:(id)a0;
- (id)contactForEmailAddress:(id)a0 onScheduler:(id)a1;
- (id)contactsForEmailAddresses:(id)a0 onScheduler:(id)a1;

@end
