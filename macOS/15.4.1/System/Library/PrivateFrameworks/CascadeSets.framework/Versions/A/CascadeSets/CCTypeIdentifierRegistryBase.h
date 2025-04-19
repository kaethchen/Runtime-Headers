@interface CCTypeIdentifierRegistryBase : NSObject <CCTypeIdentifierRegistryProtocolPrivate, CCTypeIdentifierRegistryProtocol>

+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (id)setIdentifierForItemType:(unsigned short)a0;
+ (Class)itemMessageSubclassForItemType:(unsigned short)a0;
+ (BOOL)isValidFieldType:(unsigned short)a0;
+ (BOOL)isValidItemType:(unsigned short)a0;
+ (Class)itemMessageSubclassForFieldType:(unsigned short)a0;
+ (Class)itemMessageSubclassForIdentifier:(unsigned short)a0;
+ (unsigned short)itemTypeForFieldType:(unsigned short)a0 error:(id *)a1;
+ (unsigned short)itemTypeForSetIdentifier:(id)a0;

@end
