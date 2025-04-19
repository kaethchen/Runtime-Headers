@class CKContainer, NSString, CKDatabase;

@interface CKSubscriptionInfo : NSObject {
    CKDatabase *_database;
    CKContainer *_container;
    NSString *_environment;
    id /* block */ _idHandler;
    NSString *_subscriptionID;
}

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
