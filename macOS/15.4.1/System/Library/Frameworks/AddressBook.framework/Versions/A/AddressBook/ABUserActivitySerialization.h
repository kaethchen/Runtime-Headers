@interface ABUserActivitySerialization : NSObject

+ (id)userActivityPayloadWithRecords:(id)a0 shouldUnify:(BOOL)a1;
+ (id)allAvailableUUIDsForPerson:(id)a0;
+ (id)distinctEmailAddressesForPerson:(id)a0;
+ (id)distinctPhoneNumbersForPerson:(id)a0;
+ (BOOL)isPersonACompany:(id)a0;
+ (id)userActivityTitleWithRecords:(id)a0;

@end
