@class TUCallHistoryController, NSString, NSArray, NSMutableDictionary, NSNumberFormatter, TUMetadataCache, NSObject, TUCallProviderManager, CNContactStore, CNContactFormatter;
@protocol OS_dispatch_queue;

@interface FTRecentsController : NSObject <TUCallProviderManagerDelegate>

@property (readonly, nonatomic) NSMutableDictionary *callProviderCache;
@property (readonly, nonatomic) NSMutableDictionary *contactCache;
@property (readonly, nonatomic) NSMutableDictionary *itemCache;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (readonly, nonatomic) TUCallHistoryController *callHistoryController;
@property (copy, nonatomic) NSArray *recentCalls;
@property (nonatomic) unsigned long long unreadCallCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, copy, nonatomic) id /* block */ isRTLBlock;
@property (retain, nonatomic) TUCallProviderManager *callProviderManager;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNContactStore *suggestedContactStore;
@property (readonly, nonatomic) TUMetadataCache *metadataCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decimalFormatter;

- (void)dealloc;
- (void).cxx_destruct;
- (void)providersChangedForProviderManager:(id)a0;
- (void)deleteAllRecentCalls;
- (void)deleteRecentCalls:(id)a0;
- (id)formattedNameForHandle:(id)a0 countryCode:(id)a1;
- (void)markRecentAudioCallsAsRead;
- (void)markRecentCallsAsRead;
- (void)performSynchronousBlock:(id /* block */)a0;
- (void)handleCNContactStoreDidChangeNotification:(id)a0;
- (id)noRecentsString;
- (id)fetchCallProviderForRecentCall:(id)a0;
- (int)callServiceForRecentCall:(id)a0;
- (id)contactForHandle:(id)a0 keyDescriptors:(id)a1 recentCall:(id)a2;
- (id)fetchContactFormatter;
- (void)fetchMetadataForRecentCalls:(id)a0;
- (id)fetchNumberFormatter;
- (id)fetchRecentCalls;
- (void)handleIDSServiceAvailabilityDidChangeNotification:(id)a0;
- (void)handleNSCurrentLocaleDidChangeNotification:(id)a0;
- (void)handleTUCallHistoryControllerRecentCallsDidChangeNotification:(id)a0;
- (void)handleTUCallHistoryControllerUnreadCallCountDidChangeNotification:(id)a0;
- (void)handleTUMetadataCacheDidFinishUpdatingNotification:(id)a0;
- (id)initWithIsRTLBlock:(id /* block */)a0;
- (id)itemForRecentCall:(id)a0;
- (id)localizedDisplayStringForItem:(id)a0;
- (id)localizedDisplayStringFormat;
- (id)mostRecentCallInfoForCall:(id)a0;
- (void)prePopulateContactsCache;
- (id)recentCallForUUIDString:(id)a0;
- (id)recentCallsString;

@end
