@interface CRKJSONConverter : NSObject

+ (id)JSONArrayForArray:(id)a0;
+ (id)JSONDictionaryForDictionary:(id)a0;
+ (id)bestEffortJSONObjectForObject:(id)a0;
+ (id)stringForDate:(id)a0;
+ (id)stringForObject:(id)a0;

@end
