@protocol CNDonationAgentAdapter;

@interface CNDonationStore : NSObject

@property (readonly, nonatomic) id<CNDonationAgentAdapter> adapter;

- (id)init;
- (void).cxx_destruct;
- (void)donateMeCardValues:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAdapter:(id)a0;
- (id)donatedMeCardEither;
- (id)meCardDonations;
- (id)changeFromAccount:(id)a0 toAccount:(id)a1;
- (id)donatedMeCard;
- (void)fetchDonatedMeCard:(id /* block */)a0;
- (void)rejectValueWithDonationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)rejectValuesWithClusterIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllRejectionsWithCompletionHandler:(id /* block */)a0;
- (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;

@end
