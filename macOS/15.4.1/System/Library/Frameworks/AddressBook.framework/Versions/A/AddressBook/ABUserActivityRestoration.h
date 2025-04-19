@interface ABUserActivityRestoration : NSObject

+ (id)searchQueryGivenPayload:(id)a0;
+ (id)recordIdentifiersGivenPayload:(id)a0 addressBook:(id)a1;
+ (id)companiesMatchingOrganizationName:(id)a0 addressBook:(id)a1;
+ (id)peopleMatchingFirstName:(id)a0 lastName:(id)a1 addressBook:(id)a2;
+ (id)recordIdentifierBestMatchingPayload:(id)a0 addressBook:(id)a1;
+ (id)recordIdentifiersForServerUUIDs:(id)a0 addressBook:(id)a1;
+ (id)recordsGivenPayload:(id)a0 addressBook:(id)a1;
+ (id)recordsMatchingEmailAddresses:(id)a0 phoneNumbers:(id)a1 addressBook:(id)a2;
+ (id)scoreMatches:(id)a0 usingPayload:(id)a1;

@end
