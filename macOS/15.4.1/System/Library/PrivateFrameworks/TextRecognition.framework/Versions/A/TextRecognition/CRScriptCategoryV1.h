@class NSString;

@interface CRScriptCategoryV1 : NSObject <CRScriptCategory> {
    unsigned long long _categoryValue;
}

@property (readonly) NSString *categoryName;
@property (readonly) unsigned long long categoryRevision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)common;
+ (id)unknown;
+ (float)confidenceThreshold;
+ (id)chinese;
+ (id)arabic;
+ (unsigned long long)categoryRevision;
+ (id)japanese;
+ (id)korean;
+ (id)latinCyrillic;
+ (id)sequenceScriptForCategory:(id)a0;
+ (id)supportedCategories;
+ (id)thai;
+ (id)verticalLayoutSupportedCategories;

@end
