@class NSString, NSArray, NSPredicate, NSManagedObjectContext;

@interface NSObjectController : NSController {
    id _content;
    id _objectHandler;
    id _managedProxy;
    struct __objectControllerFlags { unsigned char _editable : 1; unsigned char _automaticallyPreparesContent : 1; unsigned char _hasLoadedData : 1; unsigned char _explicitlyCannotAdd : 1; unsigned char _explicitlyCannotRemove : 1; unsigned char _isUsingManagedProxy : 1; unsigned char _hasFetched : 1; unsigned char _batches : 1; unsigned int _reservedObjectController : 24; } _objectControllerFlags;
    NSString *_objectClassName;
    Class _objectClass;
    NSArray *_contentObjectArray;
}

@property (retain) NSManagedObjectContext *managedObjectContext;
@property (copy) NSString *entityName;
@property (retain) NSPredicate *fetchPredicate;
@property BOOL usesLazyFetching;
@property (retain) id content;
@property (readonly) id selection;
@property (readonly, copy) NSArray *selectedObjects;
@property BOOL automaticallyPreparesContent;
@property Class objectClass;
@property (getter=isEditable) BOOL editable;
@property (readonly) BOOL canAdd;
@property (readonly) BOOL canRemove;

+ (void)initialize;
+ (Class)_defaultObjectClass;
+ (id)_defaultObjectClassName;
+ (id)_keyValueBindingAccessPoints;
+ (id)_modelAndProxyKeys;
+ (id)_nonAutomaticObservingKeys;

- (id)description;
- (id)init;
- (void)addObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeObject:(id)a0;
- (void)_init;
- (void)remove:(id)a0;
- (id)_controllerKeys;
- (void)_setExplicitlyCannotAdd:(BOOL)a0 remove:(BOOL)a1;
- (id)_singleMutableArrayValueForKey:(id)a0;
- (id)_fetchRequestForPerformingFetch;
- (BOOL)_canModifyManagedContent;
- (void)_changeEditable:(BOOL)a0;
- (void)_dealloc;
- (void)_executeAdd:(id)a0 didCommitSuccessfully:(BOOL)a1 actionSender:(id)a2;
- (void)_executeFetch:(id)a0 didCommitSuccessfully:(BOOL)a1 actionSender:(id)a2;
- (BOOL)_explicitlyCannotAdd;
- (BOOL)_explicitlyCannotRemove;
- (void)_invokeSingleSelector:(SEL)a0 withArguments:(id)a1 onKeyPath:(id)a2;
- (BOOL)_isManagedController;
- (BOOL)_isUsingManagedProxy;
- (id)_lazyFetchResultProxyForObjects:(id)a0;
- (id)_managedProxy;
- (void)_markHasLoadedData:(BOOL)a0;
- (BOOL)_needsLiveUpdates;
- (void)_notifyEditorStateChanged:(BOOL)a0;
- (void)_notifyManagedContextEditorStateChanged:(BOOL)a0;
- (void)_notifyOfAnyContentChange;
- (id)_objectClassName;
- (id)_objectIDsFromManagedObjects:(id)a0;
- (BOOL)_performFetchWithRequest:(id)a0 merge:(BOOL)a1 error:(id *)a2;
- (void)_prepareContentWithNewObject:(id)a0;
- (void)_reactToMatchingInsertions:(id)a0 deletions:(id)a1 refreshed:(id)a2;
- (id)_relationshipKeyPathsForPrefetching;
- (void)_setObjectClassName:(id)a0;
- (void)_setObjectHandler:(id)a0;
- (void)_setSingleValue:(id)a0 forKey:(id)a1;
- (void)_setSingleValue:(id)a0 forKeyPath:(id)a1;
- (void)_setUsingManagedProxy:(BOOL)a0;
- (id)_singleMutableArrayValueForKeyPath:(id)a0;
- (id)_singleValueForKey:(id)a0;
- (id)_singleValueForKeyPath:(id)a0;
- (BOOL)_validateSingleValue:(id *)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)_validateSingleValue:(id *)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void)add:(id)a0;
- (void)awakeFromNib;
- (id)defaultFetchRequest;
- (void)fetch:(id)a0;
- (BOOL)fetchWithRequest:(id)a0 merge:(BOOL)a1 error:(id *)a2;
- (id)initWithContent:(id)a0;
- (id)newObject;
- (void)prepareContent;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;

@end
