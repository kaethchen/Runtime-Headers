@class NSMutableArray, NSString, ICURLBag, NSError, NSDate, ICStoreRequestContext, AMSProcessInfo;

@interface ICAMSBagAdapter : NSObject <AMSBagProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_pendingBagValuePromises;
    ICURLBag *_urlBag;
    NSError *_urlBagLoadingError;
}

@property (readonly, nonatomic) ICStoreRequestContext *requestContext;
@property (readonly, getter=isExpired) BOOL expired;
@property (readonly) NSDate *expirationDate;
@property (readonly, copy) NSString *profile;
@property (readonly, copy) NSString *profileVersion;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_value:(id)a0 matchesExpectedType:(unsigned long long)a1;
+ (id)_valueForBagKey:(id)a0 valueType:(unsigned long long)a1 fromURLBag:(id)a2 urlBagLoadingError:(id)a3 valueRetrievingError:(id *)a4;
+ (id)_valueFromICURLBag:(id)a0 forKeyPath:(id)a1 valueType:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)boolForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)initWithRequestContext:(id)a0;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)_bagValueForKey:(id)a0 valueType:(unsigned long long)a1;
- (void)_didFinishLoadingBag:(id)a0 error:(id)a1;

@end
