@class NSString, NSUUID, NSData;

@interface CCSerializedSetDevice : CCItemMessage {
    NSData *_raw_deviceUUID;
}

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (readonly, nonatomic) NSString *idsDeviceIdentifier;
@property (readonly, nonatomic) NSString *platformString;
@property (readonly, nonatomic) unsigned int options;
@property (nonatomic) BOOL hasOptions;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)deviceUUID;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initWithDeviceUUID:(id)a0 idsDeviceIdentifier:(id)a1 platformString:(id)a2 options:(id)a3 error:(id *)a4;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithDeviceIdentifier:(id)a0 options:(id)a1 error:(id *)a2;

@end
