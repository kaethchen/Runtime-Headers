@class CNContactStore, NSString, CNContact, CNContactProperty;

@interface CNFavoritesEntry : NSObject {
    NSString *_name;
    NSString *_actionType;
    NSString *_bundleIdentifier;
    long long _type;
    CNContactStore *_contactStore;
    NSString *_label;
    NSString *_propertyKey;
    NSString *_abDatabaseUUID;
    NSString *_originalName;
    CNContact *_contact;
    NSString *_labeledValueIdentifier;
}

@property (nonatomic) int abUid;
@property (nonatomic) int abIdentifier;
@property (nonatomic) int oldAbUid;
@property (nonatomic) BOOL dirty;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;
@property (readonly, nonatomic) CNContactProperty *contactProperty;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long type;

+ (void)initialize;
+ (id)descriptorsForRequiredKeysForPropertyKey:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)rematch;
- (void)applyChangeRecord:(id)a0;
- (void)dictionaryRepresentation:(id *)a0 isDirty:(BOOL *)a1;
- (id)initWithContact:(id)a0 propertyKey:(id)a1 identifier:(id)a2 type:(long long)a3;
- (id)initWithContact:(id)a0 propertyKey:(id)a1 identifier:(id)a2 type:(long long)a3 store:(id)a4;
- (id)initWithContact:(id)a0 propertyKey:(id)a1 labeledValueIdentifier:(id)a2 actionType:(id)a3 bundleIdentifier:(id)a4 store:(id)a5;
- (id)initWithDictionaryRepresentation:(id)a0 store:(id)a1;
- (BOOL)rematchWithContacts;
- (void)resetContactMatch;

@end
