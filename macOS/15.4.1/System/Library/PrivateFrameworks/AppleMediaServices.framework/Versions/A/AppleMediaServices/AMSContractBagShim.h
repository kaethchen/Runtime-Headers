@class NSString, NSDate, NSObject, AMSProcessInfo;

@interface AMSContractBagShim : NSObject <AMSBagProtocol>

@property (readonly, nonatomic) NSObject *bagContract;
@property (readonly, getter=isExpired) BOOL expired;
@property (readonly) NSDate *expirationDate;
@property (readonly, copy) NSString *profile;
@property (readonly, copy) NSString *profileVersion;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_callSelector:(SEL)a0 onBagContract:(id)a1;

- (void).cxx_destruct;
- (id)boolForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (BOOL)isLoaded;
- (id)_bagValueForBagKey:(id)a0 bagValueType:(unsigned long long)a1;
- (SEL)_selectorForBagKey:(id)a0;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)initWithBagContract:(id)a0;

@end
