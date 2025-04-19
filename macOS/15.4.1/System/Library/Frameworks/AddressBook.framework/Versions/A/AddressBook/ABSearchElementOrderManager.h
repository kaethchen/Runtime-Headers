@class NSDictionary, NSMutableDictionary, NSMutableArray;

@interface ABSearchElementOrderManager : NSObject <ABSearchElementOrderManagerProtocol> {
    NSDictionary *_propertyDefinitions;
    NSMutableDictionary *_propertiesDefinitionsByName;
    NSMutableArray *_propertyNames;
}

+ (id)orderManager;

- (id)init;
- (void).cxx_destruct;
- (id)properties;
- (id)typeForProperty:(id)a0 withComparison:(long long)a1;
- (id)comparisonsForProperty:(id)a0;
- (id)definitionForComparison:(long long)a0 withPropertyDefinition:(id)a1;
- (id)definitionForProperty:(id)a0;
- (id)entryForProperty:(id)a0 withComparison:(long long)a1;
- (BOOL)isDateComparison:(long long)a0 forProperty:(id)a1;
- (BOOL)isWithinTimePeriodComparison:(long long)a0 forProperty:(id)a1;
- (BOOL)isYearLessComparison:(long long)a0 forProperty:(id)a1;
- (id)localizedStringForComparison:(long long)a0 withProperty:(id)a1;
- (id)localizedStringForProperty:(id)a0;
- (id)orderForProperty:(id)a0 comparison:(long long)a1;
- (id)propertyDefinitions;
- (BOOL)propertyIsComposite:(id)a0;
- (BOOL)putPropertyInOtherMenu:(id)a0;
- (void)updatePropertyWidth:(double *)a0 andComparisonWidth:(double *)a1;

@end
