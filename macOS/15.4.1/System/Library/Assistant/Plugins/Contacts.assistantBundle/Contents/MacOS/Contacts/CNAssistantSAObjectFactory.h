@interface CNAssistantSAObjectFactory : NSObject

+ (id)_newFormattedPhoneNumberFromString:(id)a0;
+ (id)saEmailWithValue:(id)a0 label:(id)a1;
+ (id)saLocationWithAddress:(id)a0 label:(id)a1;
+ (id)saLocationWithValue:(id)a0 label:(id)a1;
+ (id)saPhoneWithValue:(id)a0 label:(id)a1;
+ (id)saRelatedNameWithValue:(id)a0 label:(id)a1;
+ (id)saSocialProfileWithValue:(id)a0;

@end
