@class NSString, NSDictionary, NSOperationQueue, ACAccount, NSNumber;

@interface AMSCB1PAppleAccount : NSObject <AMSCB1PAppleAccountSource> {
    NSOperationQueue *_operationQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    ACAccount *_account;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSNumber *DSID;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, nonatomic) NSDictionary *properties;
@property (retain, nonatomic) NSString *storefront;
@property (readonly, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (id)cookies;
- (void)removeAllCookiesWithCompletion:(id /* block */)a0;
- (void)addCookies:(id)a0 withCompletion:(id /* block */)a1;
- (void)cookiesWithCompletion:(id /* block */)a0;
- (void)setProperty:(id)a0 key:(id)a1;

@end
