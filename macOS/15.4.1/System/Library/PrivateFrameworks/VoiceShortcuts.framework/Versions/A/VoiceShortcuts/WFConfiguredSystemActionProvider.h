@class NSMutableDictionary;

@interface WFConfiguredSystemActionProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *observers;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } observersLock;

+ (id)sharedProvider;

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 forActionType:(id)a1;
- (id)availableActionTypes;
- (id)configuredStaccatoActionFromTemplate:(id)a0 valuesByParameterKey:(id)a1 error:(id *)a2;
- (id)configuredSystemActionForActionType:(id)a0;
- (id)defaultSystemActionForActionType:(id)a0;
- (id)linkActionWithStaccatoIdentifier:(id)a0;
- (BOOL)saveUpdatedAction:(id)a0 forActionType:(id)a1;
- (id)userDefaultsForSystemActionType:(id)a0;
- (id)userDefaultsKeyForSystemActionType:(id)a0;

@end
