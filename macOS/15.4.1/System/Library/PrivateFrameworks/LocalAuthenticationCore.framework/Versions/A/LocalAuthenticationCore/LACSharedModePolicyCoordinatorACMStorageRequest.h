@class NSData, NSUUID, NSString;
@protocol LACXPCClient;

@interface LACSharedModePolicyCoordinatorACMStorageRequest : NSObject <LACStorageRequest>

@property (nonatomic) unsigned int identifier;
@property (nonatomic) long long key;
@property (retain, nonatomic) NSData *acl;
@property (retain, nonatomic) id<LACXPCClient> client;
@property (retain, nonatomic) NSUUID *contextID;
@property (nonatomic) long long domain;
@property (retain, nonatomic) NSData *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(long long)a0 boolValue:(BOOL)a1;

@end
