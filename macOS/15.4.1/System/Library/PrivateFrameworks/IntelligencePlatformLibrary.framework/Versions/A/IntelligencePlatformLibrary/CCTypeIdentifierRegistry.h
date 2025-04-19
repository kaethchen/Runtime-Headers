@interface CCTypeIdentifierRegistry : CCTypeIdentifierRegistryBase

+ (id)setIdentifierForItemType:(unsigned short)a0;
+ (Class)itemMessageSubclassForItemType:(unsigned short)a0;
+ (Class)itemMessageSubclassForFieldType:(unsigned short)a0;
+ (Class)itemMessageSubclassForIdentifier:(unsigned short)a0;
+ (unsigned short)itemTypeForSetIdentifier:(id)a0;

@end
