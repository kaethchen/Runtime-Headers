@interface ABNamesvCardFiles : NSObject

+ (id)nameWithName:(id)a0 andName:(id)a1 conflicts:(unsigned long long)a2;
+ (id)conflictedNameWithName:(id)a0 andName:(id)a1 conflicts:(unsigned long long)a2;
+ (id)conflictedNameWithName:(id)a0 andOthers:(unsigned long long)a1 conflicts:(unsigned long long)a2;
+ (id)conflictedNameWithName:(id)a0 conflicts:(unsigned long long)a1;
+ (id)nameForContact:(id)a0 andContact:(id)a1;
+ (id)nameForContact:(id)a0 andOthers:(unsigned long long)a1;
+ (id)nameForContactAsOrganization:(id)a0;
+ (id)nameForContactAsPerson:(id)a0;
+ (id)nameForPeople:(id)a0;
+ (id)nameForPerson:(id)a0;
+ (id)nameWithName:(id)a0 andOthers:(unsigned long long)a1 conflicts:(unsigned long long)a2;
+ (id)nameWithName:(id)a0 conflicts:(unsigned long long)a1;
+ (id)nameWithStrings:(id)a0;
+ (id)nameWithStrings:(id)a0 conflicts:(unsigned long long)a1;
+ (id)pathWithNames:(id)a0 inDirectory:(id)a1;
+ (id)pathWithNames:(id)a0 inDirectory:(id)a1 fileManager:(id)a2;
+ (id)stringByReplacingUnsafePathCharactersInString:(id)a0;
+ (id)unconflictedNameWithName:(id)a0;
+ (id)unconflictedNameWithName:(id)a0 andName:(id)a1;
+ (id)unconflictedNameWithName:(id)a0 andOthers:(unsigned long long)a1;

@end
