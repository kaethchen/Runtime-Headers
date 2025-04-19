@class NSString, NSArray, CCSerializedSetDevice;

@interface CCSerializedSetMessage : CCItemMessage

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) unsigned int itemType;
@property (nonatomic) BOOL hasItemType;
@property (readonly, nonatomic) NSString *setIdentifier;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) NSArray *descriptors;
@property (readonly, nonatomic) unsigned int sharedItemCount;
@property (nonatomic) BOOL hasSharedItemCount;
@property (readonly, nonatomic) unsigned int localItemInstanceCount;
@property (nonatomic) BOOL hasLocalItemInstanceCount;
@property (readonly, nonatomic) CCSerializedSetDevice *localDevice;
@property (readonly, nonatomic) NSArray *remoteDevices;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) unsigned int options;
@property (nonatomic) BOOL hasOptions;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initWithItemType:(id)a0 setIdentifier:(id)a1 personaIdentifier:(id)a2 descriptors:(id)a3 sharedItemCount:(id)a4 localItemInstanceCount:(id)a5 localDevice:(id)a6 remoteDevices:(id)a7 items:(id)a8 options:(id)a9 error:(id *)a10;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithItemType:(id)a0 personaIdentifier:(id)a1 descriptors:(id)a2 sharedItemCount:(id)a3 localItemInstanceCount:(id)a4 devices:(id)a5 items:(id)a6 options:(id)a7 error:(id *)a8;

@end
