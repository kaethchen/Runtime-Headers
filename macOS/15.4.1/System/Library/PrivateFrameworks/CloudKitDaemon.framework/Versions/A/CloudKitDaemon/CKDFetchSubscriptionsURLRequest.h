@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKDFetchSubscriptionsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *subscriptionIDs;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableDictionary *subscriptionIDByRequestID;
@property (copy, nonatomic) id /* block */ subscriptionFetchedBlock;
@property (copy, nonatomic) id /* block */ errorFetchingAllSubscriptionsBlock;

- (void).cxx_destruct;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 subscriptionIDs:(id)a1;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (BOOL)requiresCKAnonymousUserIDs;
- (id)zoneIDsToLock;

@end
