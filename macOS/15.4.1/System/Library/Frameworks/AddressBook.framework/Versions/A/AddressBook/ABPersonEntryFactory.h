@class NSString, NSPredicate, ABCDRecordNameFormatter;

@interface ABPersonEntryFactory : NSObject {
    NSString *_property;
    long long _propertyType;
    NSPredicate *_filterPredicate;
    unsigned long long _defaultNameOrder;
    ABCDRecordNameFormatter *_recordNameFormatter;
    BOOL _isMe;
}

@property unsigned long long resultType;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;
- (unsigned long long)nameOrderForRecord:(id)a0;
- (id)linkIdentifierForRecord:(id)a0;
- (unsigned long long)iconTypeForRecord:(id)a0;
- (id)initWithProperty:(id)a0 propertyFilterPredicate:(id)a1 propertyType:(long long)a2 resultType:(unsigned long long)a3;
- (id)initWithProperty:(id)a0 propertyFilterPredicate:(id)a1 propertyType:(long long)a2 resultType:(unsigned long long)a3 userDefaults:(id)a4;
- (id)nameForRecord:(id)a0 rangeOfSortingSubstring:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)peoplePickerSubrowObjectBuilderForRecords:(id)a0;
- (id)personEntryForLinkedContacts:(id)a0;
- (id)personEntryForRecord:(id)a0;
- (id)personEntryForRecord:(id)a0 suggestionIdentifier:(id)a1 isMe:(BOOL)a2;
- (id)pickerPropertyObjectsForAllRecords:(id)a0;
- (id)searchStringForAllRecords:(id)a0;
- (id)sectionKeyForRecord:(id)a0;

@end
