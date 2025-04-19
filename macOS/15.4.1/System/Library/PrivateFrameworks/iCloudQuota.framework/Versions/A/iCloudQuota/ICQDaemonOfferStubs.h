@class NSArray;

@interface ICQDaemonOfferStubs : ICQDaemonPersisted

@property (readonly, nonatomic) NSArray *serverStubs;
@property (readonly, nonatomic) NSArray *buddyStubs;
@property (readonly, nonatomic) NSArray *defaultStubs;
@property (readonly, nonatomic) NSArray *premiumStubs;
@property (readonly, nonatomic) NSArray *eventStubs;

+ (id)persistenceKey;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)chooseDefaultStubForConditions:(id)a0;
- (id)chooseFirstStub;
- (id)chooseBuddyStub;
- (id)chooseEventStub;
- (id)choosePremiumStubForConditions:(id)a0;
- (id)_chooseStubFromServerStubs:(id)a0 conditions:(id)a1;
- (id)_chooseStubFromServerStubs:(id)a0 offerType:(long long)a1;
- (void)_initServerStubsFromServerDictionary;
- (id)_initWithAccount:(id)a0 error:(id)a1;
- (id)_initWithAccount:(id)a0 serverDictionary:(id)a1;
- (BOOL)_isValidServerStubs:(id)a0 key:(id)a1;
- (BOOL)_stubsArrayContainsOfferID:(id)a0 stubs:(id)a1;
- (id)chooseBuddyStubForConditions:(id)a0;
- (id)chooseBuddyStubForOfferType:(long long)a0;
- (id)chooseDefaultStub;
- (id)chooseEventStubForConditions:(id)a0;
- (id)chooseFirstDefaultStub;
- (id)chooseFirstEventStub;
- (id)chooseFirstPremiumStub;
- (id)choosePremiumStub;
- (id)chooseStub;
- (id)chooseStubForConditions:(id)a0;
- (id)chooseStubForOfferType:(long long)a0;
- (BOOL)containsOfferID:(id)a0;
- (void)setServerDictionary:(id)a0;
- (id)sortedServerStubs:(id)a0;

@end
