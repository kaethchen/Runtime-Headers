@class NSString, NSUserDefaults, NSHashTable;

@interface WFConfiguredSystemActionObserverRegistration : NSObject

@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSString *userDefaultsKey;
@property (retain, nonatomic) NSHashTable *observers;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithUserDefaults:(id)a0 userDefaultsKey:(id)a1 actionType:(id)a2;

@end
