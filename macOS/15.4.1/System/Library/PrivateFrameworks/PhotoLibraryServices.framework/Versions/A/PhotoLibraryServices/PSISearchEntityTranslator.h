@interface PSISearchEntityTranslator : NSObject

+ (unsigned long long)_indexCategoryForSearchEntityType:(unsigned long long)a0;
+ (id)_lookupIdentifierForSearchEntity:(id)a0;
+ (id)psiGroupFromSearchEntity:(id)a0;
+ (id)zeroScorePSIGroupFromLabel:(id)a0 type:(unsigned long long)a1 identifier:(id)a2;

@end
