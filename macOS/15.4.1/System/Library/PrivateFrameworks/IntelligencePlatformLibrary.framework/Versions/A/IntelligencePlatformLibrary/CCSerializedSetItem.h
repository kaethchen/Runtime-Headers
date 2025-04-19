@class CCSerializedSetSharedItem, NSArray, CCRepeatedUInt32, CCRepeatedInt64, NSData;

@interface CCSerializedSetItem : CCItemMessage

@property (readonly, nonatomic) CCSerializedSetSharedItem *sharedItem;
@property (readonly, nonatomic) CCRepeatedUInt32 *deviceIndexes;
@property (readonly, nonatomic) NSArray *localInstances;
@property (readonly, nonatomic) unsigned int itemType;
@property (nonatomic) BOOL hasItemType;
@property (readonly, nonatomic) long long sharedIdentifier;
@property (nonatomic) BOOL hasSharedIdentifier;
@property (readonly, nonatomic) CCRepeatedInt64 *localInstanceIdentifiers;
@property (readonly, nonatomic) NSData *content;
@property (readonly, nonatomic) NSArray *localMetaContent;
@property (readonly, nonatomic) CCRepeatedUInt32 *remoteDeviceIndices;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initWithItemType:(id)a0 sharedIdentifier:(id)a1 localInstanceIdentifiers:(id)a2 content:(id)a3 localMetaContent:(id)a4 remoteDeviceIndices:(id)a5 error:(id *)a6;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithSharedItem:(id)a0 deviceIndexes:(id)a1 localInstances:(id)a2 error:(id *)a3;

@end
