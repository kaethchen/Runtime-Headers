@class NSData;

@interface CCItemMessage : NSObject <NSCopying, CCJSONDescribing>

@property (class, readonly, nonatomic) Class metaContentMessageClass;
@property (class, readonly, nonatomic) Class contentMessageClass;
@property (class, readonly, nonatomic) unsigned short itemType;

@property (readonly, nonatomic) NSData *innerData;

+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (id)contentMessageForItemType:(unsigned short)a0 data:(id)a1 error:(id *)a2;
+ (id)metaContentMessageForItemType:(unsigned short)a0 data:(id)a1 error:(id *)a2;
+ (id)contentMessageForItemType:(unsigned short)a0 jsonDictionary:(id)a1 error:(id *)a2;
+ (id)metaContentMessageForItemType:(unsigned short)a0 jsonDictionary:(id)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (id)jsonDictionary;
- (id)jsonDict;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)recursivelyEnumerateFieldsWithError:(id *)a0 forParentField:(id)a1 isRepeatedSubMessage:(BOOL)a2 repeatedSubMessageIndex:(unsigned int)a3 usingBlock:(id /* block */)a4;
- (BOOL)recursivelyEnumerateFieldsWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
