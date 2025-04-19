@class NSString, NSMutableArray, NSMutableDictionary;

@interface NSController : NSObject <NSCoding, NSEditor, NSEditorRegistration> {
    id _modelObservingTracker;
    id _expectedObservingInfo;
    id _singleValueAccessor;
    int _specialPurposeType;
    id _bindingAdaptor;
    NSMutableArray *_editors;
    NSMutableArray *_declaredKeys;
    NSMutableDictionary *_dependentKeyToModelKeyTable;
    NSMutableDictionary *_modelKeyToDependentKeyTable;
    NSMutableArray *_modelKeysToRefreshEachTime;
    struct __bindingsControllerFlags { unsigned char _alwaysPresentsApplicationModalAlerts : 1; unsigned char _refreshesAllModelKeys : 1; unsigned char _multipleObservedModelObjects : 1; unsigned char _isEditing : 1; unsigned int _reservedController : 28; } _bindingsControllerFlags;
}

@property (readonly, getter=isEditing) BOOL editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (BOOL)_shouldAddObservationForwardersForKey:(id)a0;
+ (id)_keyValueBindingAccessPoints;
+ (id)_modelAndProxyKeys;
+ (Class)_modelObservingTrackerClass;
+ (id)_nonAutomaticObservingKeys;

- (void)dealloc;
- (id)init;
- (void)didChangeValueForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)willChangeValueForKey:(id)a0;
- (void)_init;
- (void)_notifyObserversForKeyPath:(id)a0 change:(id)a1;
- (BOOL)_shouldAddObservationForwardersForKey:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (id)_controllerKeys;
- (id)_singleMutableArrayValueForKey:(id)a0;
- (id)_bindingAdaptor;
- (void)_addDeclaredKey:(id)a0;
- (void)_controllerEditor:(id)a0 didCommit:(BOOL)a1 contextInfo:(id)a2;
- (void)_dealloc;
- (id)_declaredKeys;
- (void)_finishEditingState;
- (void)_invokeSingleSelector:(SEL)a0 withArguments:(id)a1 onKeyPath:(id)a2;
- (id)_modelAndProxyKeysObserved;
- (id)_modelKeysTriggeringChangeNotificationsForDependentKey:(id)a0;
- (void)_notifyEditorStateChanged:(BOOL)a0;
- (BOOL)_observesModelObjects;
- (BOOL)_refreshesAllModelKeys;
- (void)_removeDeclaredKey:(id)a0;
- (void)_setBindingAdaptor:(id)a0;
- (void)_setDeclaredKeys:(id)a0;
- (void)_setModelKeys:(id)a0 triggerChangeNotificationsForDependentKey:(id)a1;
- (void)_setRefreshesAllModelKeys:(BOOL)a0;
- (void)_setSingleValue:(id)a0 forKey:(id)a1;
- (void)_setSingleValue:(id)a0 forKeyPath:(id)a1;
- (void)_setSpecialPurposeType:(long long)a0;
- (BOOL)_shouldSendObserverNotificationForModelOrProxyKey:(id)a0 keyPath:(id)a1 ofObject:(id)a2;
- (BOOL)_shouldSuppressObserverNotificationFromObject:(id)a0 keyPath:(id)a1;
- (id)_singleMutableArrayValueForKeyPath:(id)a0;
- (id)_singleValueForKey:(id)a0;
- (id)_singleValueForKeyPath:(id)a0;
- (id)_singleValueForKeyPath:(id)a0 operationType:(long long)a1;
- (long long)_specialPurposeType;
- (BOOL)_validateSingleValue:(id *)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)_validateSingleValue:(id *)a0 forKeyPath:(id)a1 error:(id *)a2;
- (BOOL)alwaysPresentsApplicationModalAlerts;
- (BOOL)commitEditing;
- (BOOL)commitEditingAndReturnError:(id *)a0;
- (void)commitEditingWithDelegate:(id)a0 didCommitSelector:(SEL)a1 contextInfo:(void *)a2;
- (void)discardEditing;
- (void)objectDidBeginEditing:(id)a0;
- (void)objectDidEndEditing:(id)a0;
- (void)setAlwaysPresentsApplicationModalAlerts:(BOOL)a0;

@end
