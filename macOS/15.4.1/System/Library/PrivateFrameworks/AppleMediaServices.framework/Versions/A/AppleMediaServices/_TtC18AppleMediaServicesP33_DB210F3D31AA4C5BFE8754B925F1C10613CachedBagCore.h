@class NSString, NSError, NSDate, AMSSnapshotBag;

@interface _TtC18AppleMediaServicesP33_DB210F3D31AA4C5BFE8754B925F1C10613CachedBagCore : NSObject <AMSBagProtocol> {
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ profileVersion;
    void /* unknown type, empty encoding */ bagLoader;
}

@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ processInfo;
@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) NSDate *expirationDate;

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
- (id)URLForKey:(id)a0 account:(id)a1;
- (void)createSnapshotWithCompletion:(void (^)(AMSSnapshotBag *, NSError *))a0;

@end
