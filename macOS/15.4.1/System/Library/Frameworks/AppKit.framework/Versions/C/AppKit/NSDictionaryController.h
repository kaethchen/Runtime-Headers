@class NSString, NSArray, NSDictionary;

@interface NSDictionaryController : NSArrayController {
    id _contentDictionary;
    NSString *_initialKey;
    id _initialValue;
    unsigned long long _minimumInsertionKeyIndex;
    NSString *_localizedKeyStringsFileName;
    NSDictionary *_localizedKeyForKeyDictionary;
    NSDictionary *_keyForLocalizedKeyDictionary;
    NSArray *_includedKeys;
    NSArray *_excludedKeys;
    struct __dictionaryControllerFlags { unsigned char _deepCopiesValues : 1; unsigned char _suppressBuildingDictionary : 1; unsigned int _reservedDictionaryController : 30; } _dictionaryControllerFlags;
}

@property (copy) NSString *initialKey;
@property (retain) id initialValue;
@property (copy) NSArray *includedKeys;
@property (copy) NSArray *excludedKeys;
@property (copy) NSDictionary *localizedKeyDictionary;
@property (copy) NSString *localizedKeyTable;

+ (Class)_defaultObjectClass;
+ (id)_nonAutomaticObservingKeys;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_init;
- (id)content;
- (void)setContent:(id)a0;
- (id)_dictionaryForKeyValuePairArray:(id)a0 pullExcludedKeysFromDictionary:(id)a1;
- (id)_arrayContent;
- (void)_buildAndAssignNewContentDictionary;
- (void)_dealloc;
- (void)_insertObject:(id)a0 atArrangedObjectIndex:(unsigned long long)a1 objectHandler:(id)a2;
- (void)_insertObjects:(id)a0 atArrangedObjectIndexes:(id)a1 objectHandler:(id)a2;
- (id)_insertionKeyForDictionary:(id)a0 minimumIndex:(unsigned long long *)a1;
- (void)_invokeSingleSelector:(SEL)a0 withArguments:(id)a1 onKeyPath:(id)a2;
- (id)_keyForLocalizedKey:(id)a0;
- (id)_keyForLocalizedKeyDictionary;
- (id)_keyValuePairArrayForDictionary:(id)a0 reuseKeyValuePairsFromArray:(id)a1;
- (id)_localizedKeyForKey:(id)a0;
- (id)_managedProxy;
- (id)_newObject;
- (void)_noteKeyValuePairChangedKey:(id)a0;
- (void)_noteKeyValuePairChangedValue:(id)a0;
- (void)_prepareContentWithNewObject:(id)a0;
- (void)_recomputeLocalizedKeys;
- (void)_removeObjectAtArrangedObjectIndex:(unsigned long long)a0 objectHandler:(id)a1;
- (void)_removeObjects:(id)a0 objectHandler:(id)a1;
- (void)_removeObjectsAtArrangedObjectIndexes:(id)a0 contentIndexes:(id)a1 objectHandler:(id)a2;
- (BOOL)_sendsContentChangeNotifications;
- (void)_setArrayContentInBackground:(id)a0;
- (void)_setContentInBackground:(id)a0;
- (void)_setSingleValue:(id)a0 forKey:(id)a1;
- (void)_setSingleValue:(id)a0 forKeyPath:(id)a1;
- (id)_transformationForString:(id)a0 dictionary:(id)a1;
- (void)_updateLocalizedDictionaryForNewLocalizedKeyTable;
- (BOOL)canRemove;
- (BOOL)deepCopiesValues;
- (id)newObject;
- (void)setDeepCopiesValues:(BOOL)a0;
- (void)setEntityName:(id)a0;
- (void)setFetchPredicate:(id)a0;
- (void)setManagedObjectContext:(id)a0;

@end
