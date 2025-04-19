@interface PFScript : PFModule

+ (id)moduleName;
+ (id)packageFileTypes;

- (id)description;
- (id)name;
- (id)identifier;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)title;
- (int)capabilities;
- (id)information;
- (BOOL)hasAction:(id)a0;
- (id)taskForAction:(id)a0 withContextDictionary:(id)a1;
- (id)taskForExtractionWithPlan:(id)a0 toDirectory:(id)a1;

@end
