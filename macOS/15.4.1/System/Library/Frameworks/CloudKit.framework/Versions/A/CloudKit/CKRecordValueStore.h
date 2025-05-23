@class NSString, NSMutableDictionary, NSMutableSet, CKRecord;

@interface CKRecordValueStore : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding> {
    BOOL _trackChanges;
    CKRecord *_record;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSMutableDictionary *values;
@property (copy) NSMutableDictionary *originalValues;
@property (copy) NSMutableSet *changedKeysSet;
@property (readonly, getter=isEncrypted) BOOL encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (void)setNilValueForKey:(id)a0;
- (id)recordID;
- (id)changedKeys;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)rawValueForKey:(id)a0;
- (id)initWithRecord:(id)a0;
- (void)_setObject:(id)a0 forKey:(id)a1;
- (id)allRawValues;
- (BOOL)containsValueOfClasses:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (BOOL)containsValueOfClasses:(id)a0 passingTest:(id /* block */)a1;
- (BOOL)containsValuePassingTest:(id /* block */)a0;
- (void)enumerateKeysAndValuesOfClasses:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateKeysAndValuesOfClasses:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateKeysAndValuesUsingBlock:(id /* block */)a0;
- (void)resetChangedKeys;
- (void)setObjectNoValidate:(id)a0 forKey:(id)a1;
- (void)setRawValue:(id)a0 forKey:(id)a1;

@end
