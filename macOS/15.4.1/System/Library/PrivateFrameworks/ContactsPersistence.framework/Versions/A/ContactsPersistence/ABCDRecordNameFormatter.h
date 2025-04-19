@interface ABCDRecordNameFormatter : NSFormatter

@property BOOL showPrefix;
@property BOOL showSuffix;
@property BOOL showCompany;
@property BOOL showFallback;
@property BOOL showNickname;
@property BOOL showCompanyInFallback;
@property BOOL showPhonetic;
@property (readonly) unsigned long long defaultNameOrder;
@property (readonly) unsigned long long defaultSortOrder;

+ (id)displayNameFormatter;

- (id)init;
- (id)stringForObjectValue:(id)a0;
- (id)initWithUserDefaults:(id)a0;
- (unsigned long long)nameOrderForRecord:(id)a0;
- (id)stringFromRecord:(id)a0;
- (id)stringFromRecord:(id)a0 rangeOfSortingSubstring:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;

@end
