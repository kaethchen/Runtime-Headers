@class NSString, NSUndoManager;

@interface ACSHPlistObject : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isInitializing;
@property (readonly, nonatomic) NSUndoManager *undoManager;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (Class)classForDict:(id)a0;
+ (id)createWithDictionary:(id)a0 undoManager:(id)a1;
+ (id)keysForValuesToObserveForView;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithUndoManager:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)descriptionForDepth:(unsigned long long)a0;
- (id)dictionaryForSaving;

@end
