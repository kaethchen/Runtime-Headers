@class CCHome, CCHomeService, CCHomeRoom, CCHomeZone, CCHomeTrigger, CCHomeServiceGroup, CCHomeAccessory, CCHomeScene;

@interface CCHomeContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) CCHome *home;
@property (readonly, nonatomic) CCHomeZone *zone;
@property (readonly, nonatomic) CCHomeRoom *room;
@property (readonly, nonatomic) CCHomeService *service;
@property (readonly, nonatomic) CCHomeServiceGroup *serviceGroup;
@property (readonly, nonatomic) CCHomeScene *scene;
@property (readonly, nonatomic) CCHomeTrigger *trigger;
@property (readonly, nonatomic) CCHomeAccessory *accessory;
@property (readonly, nonatomic) unsigned int entityType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithEntity:(id)a0 entityType:(unsigned int)a1 error:(id *)a2;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
