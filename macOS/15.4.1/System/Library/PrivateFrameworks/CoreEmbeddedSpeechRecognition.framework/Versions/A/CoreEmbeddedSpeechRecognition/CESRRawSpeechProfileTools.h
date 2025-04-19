@interface CESRRawSpeechProfileTools : NSObject

+ (id)convertRawSpeechProfile:(id)a0 deviceId:(id)a1 userId:(id)a2 omitItemTypes:(id)a3 error:(id *)a4;
+ (id)itemWithType:(long long)a0 itemId:(id)a1 fieldType:(long long)a2 value:(id)a3;
+ (id)localeFromRawSpeechProfile:(id)a0 error:(id *)a1;
+ (id)mergeMultiUserPrimaryProfile:(id)a0 withCompanionProfiles:(id)a1 error:(id *)a2;
+ (id)placeholderItemIdWithCategoryName:(id)a0;
+ (id)vocabularyItemsOfType:(long long)a0 fromRawSpeechProfile:(id)a1 error:(id *)a2;

@end
