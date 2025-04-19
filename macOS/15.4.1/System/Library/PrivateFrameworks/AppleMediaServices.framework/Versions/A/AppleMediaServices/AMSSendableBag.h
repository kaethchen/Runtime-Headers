@class AMSSnapshotBag, NSString, NSDate, AMSProcessInfo, NSError;

@interface AMSSendableBag : NSObject <AMSBagProtocol> {
    void /* unknown type, empty encoding */ wrappedBag;
}

@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;
@property (nonatomic, readonly) AMSProcessInfo *processInfo;

- (id)init;
- (void).cxx_destruct;
- (id)boolForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (BOOL)isExpired;
- (void)createSnapshotWithCompletion:(void (^)(AMSSnapshotBag *, NSError *))a0;
- (id)initWithWrappedBag:(id)a0;

@end
