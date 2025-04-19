@class NSString, NSArray, NSOperationQueue, EAEmailAddressSet, NSObject, NSMutableDictionary;
@protocol OS_os_log, EMVIPManager;

@interface MFVIPSendersController : NSObject <EFLoggable, MFVIPSendersMailboxesProvider> {
    NSMutableDictionary *_VIPSendersMailboxesByIdentifier;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) id<EMVIPManager> vipManager;
@property (readonly, copy) EAEmailAddressSet *addressesForVIPSenders;
@property (nonatomic) BOOL filterByInboxOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *VIPSendersMailboxes;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (void)test_waitForOperationQueueToFinish;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)save;
- (void)_vipsDidChange:(id)a0;
- (void)_readVIPSenders;
- (id)_ABPersonForName:(id)a0 emailAddresses:(id)a1 withAddressBook:(id)a2;
- (id)_ABPersonForName:(id)a0 withAddressBook:(id)a1;
- (void)_addressBookDidChange:(id)a0;
- (id)_addressBookRecordsForFirstName:(id)a0 lastName:(id)a1 withAddressBook:(id)a2;
- (id)_addressesForMailboxCriteria:(id)a0;
- (id)_combineAddresses:(id)a0 withAddresses:(id)a1;
- (id)_mailboxCriteriaForAddresses:(id)a0;
- (id)_mailboxWithVIP:(id)a0 additionalEmailAddresses:(id)a1;
- (void)_saveMailboxInfo;
- (void)_updateMailboxesAndPostNotificationsIsFirstLoad:(BOOL)a0;
- (id)_vipMailboxesPlistPath;
- (void)addNewVIPSenderWithAddress:(id)a0 name:(id)a1;
- (BOOL)isVIPForPerson:(id)a0 orAddress:(id)a1;
- (void)removeVIPSenderWithAddress:(id)a0;
- (void)removeVIPSenderWithMailboxes:(id)a0;

@end
