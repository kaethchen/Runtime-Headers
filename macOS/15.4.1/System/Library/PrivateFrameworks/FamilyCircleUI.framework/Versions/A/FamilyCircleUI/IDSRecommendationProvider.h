@class NSArray;

@interface IDSRecommendationProvider : NSObject <ValidatePeopleRecommendationHandlesProtocol>

- (id)init;
- (id)getIDForEmailAddressWithHandle:(id)a0;
- (id)getIDForBestGuessIDWithHandle:(id)a0;
- (id)getIDForPhoneNumberWithPhoneNumber:(id)a0;
- (void)validateHandlesWithIdsDestinations:(NSArray *)a0 completionHandler:(void (^)(NSArray *))a1;

@end
