@class NSUUID, NSDictionary, NSString, NSNumber;
@protocol LACXPCClient;

@interface DomainStateRequest : Request <LACDomainStateRequest>

@property (weak, nonatomic) id<LACXPCClient> client;
@property (readonly, nonatomic) NSUUID *contextID;
@property (readonly, nonatomic) NSNumber *userID;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) unsigned int identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 client:(id)a1 contextID:(id)a2;

@end
