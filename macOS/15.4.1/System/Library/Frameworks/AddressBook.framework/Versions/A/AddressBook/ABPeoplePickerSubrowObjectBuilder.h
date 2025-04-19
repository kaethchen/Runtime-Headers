@class NSArray, NSString, NSPredicate, NSMutableDictionary, NSMutableArray;

@interface ABPeoplePickerSubrowObjectBuilder : NSObject {
    NSArray *_coreDataRecords;
    NSPredicate *_filterPredicate;
    NSMutableArray *_peoplePickerSubrowObjects;
    NSString *_property;
    NSMutableDictionary *_valueIdentifierToRecordIdentifierMap;
    long long _propertyType;
}

- (void).cxx_destruct;
- (void)addPickerPropertyObjectsForMultiValue:(id)a0;
- (void)addPickerPropertyObjectsForMultiValueOnRecords:(id)a0;
- (void)addPickerPropertyObjectsForSingleValueOnRecords:(id)a0;
- (id)buildPeoplePickerSubrowObjects;
- (BOOL)filterObject:(id)a0;
- (id)initWithCoreDataRecords:(id)a0 property:(id)a1 propertyType:(long long)a2 propertyFilterPredicate:(id)a3;
- (id)multiValueForLegacyIMServicePropertyMultiValue:(id)a0;
- (id)multiValueForRecord:(id)a0;
- (id)multiValueForRecords:(id)a0;
- (id)singleValueForRecord:(id)a0;

@end
