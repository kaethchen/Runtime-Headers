@class NSUserDefaults, NSMutableDictionary, NSDictionary;

@interface NSUserDefaultsController : NSController {
    NSUserDefaults *_defaults;
    NSMutableDictionary *_valueBuffer;
    NSDictionary *_initialValues;
    struct __userDefaultsControllerFlags { unsigned char _sharedInstance : 1; unsigned char _appliesImmediately : 1; unsigned int _reservedUserDefaultsController : 30; } _userDefaultsControllerFlags;
}

@property (class, readonly) NSUserDefaultsController *sharedUserDefaultsController;

@property (readonly) NSUserDefaults *defaults;
@property (copy) NSDictionary *initialValues;
@property BOOL appliesImmediately;
@property (readonly) BOOL hasUnappliedChanges;
@property (readonly) id values;

+ (id)_keyValueBindingAccessPoints;
+ (id)_modelAndProxyKeys;
+ (id)_nonAutomaticObservingKeys;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_init;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)_controllerKeys;
- (id)_singleMutableArrayValueForKey:(id)a0;
- (id)initWithDefaults:(id)a0 initialValues:(id)a1;
- (void)revert:(id)a0;
- (void)_applyAllValuesFromValueBuffer;
- (void)_applyValue:(id)a0 forKey:(id)a1 registrationDomain:(id)a2;
- (void)_dealloc;
- (void)_executeSave:(id)a0 didCommitSuccessfully:(BOOL)a1 actionSender:(id)a2;
- (void)_invokeSingleSelector:(SEL)a0 withArguments:(id)a1 onKeyPath:(id)a2;
- (BOOL)_isSharedUserDefaultsControllerProxy;
- (void)_setDefaults:(id)a0;
- (void)_setSharedUserDefaultsControllerProxy:(BOOL)a0;
- (void)_setSingleValue:(id)a0 forKey:(id)a1;
- (id)_singleValueForKey:(id)a0;
- (id)_valueBuffer;
- (void)revertToInitialValues:(id)a0;
- (void)save:(id)a0;

@end
