@class NSString;

@interface ISDPropertyValue : NSObject {
    NSString *_name;
    int _clientNumber;
    id _value;
    id _deletedValue;
    id _unformattedValue;
    unsigned int _generation;
    int _type;
    int _collectionType;
    BOOL _isDefaultValue;
}

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setName:(id)a0;
- (id)value;
- (void)setValue:(id)a0;
- (BOOL)isDeleted;
- (int)propertyType;
- (void)setUnformattedValue:(id)a0;
- (id)unformattedValue;
- (int)collectionType;
- (BOOL)isDefaultValue;
- (void)setIsDefaultValue:(BOOL)a0;
- (BOOL)_decodedCollectionsAreEqual:(id)a0;
- (id)_decodeCollectionData:(id)a0 forType:(int)a1;
- (BOOL)_valuesAreEqual:(id)a0;
- (id)createRelationshipValueAsIdentifiers;
- (id)decodeCollectionData:(id)a0 forType:(int)a1;
- (void)deleteValueInGeneration:(unsigned int)a0 byClientWithId:(id)a1;
- (id)deletedValue;
- (id)encodeCollectionData:(id)a0 forType:(int)a1;
- (void)encodeWithQuickDirtyCoder:(id)a0;
- (id)fastDeletedValue;
- (id)fastLastModifiedByClientId;
- (id)fastName;
- (id)fastPrimativeUnformattedValue;
- (id)fastUnformattedValue;
- (id)fastValue;
- (id)fastValueOrDeletedValue;
- (id)findTuplesWithValueEqualToId:(id)a0;
- (id)initDeletedPropertyValueWithPropertyType:(int)a0 name:(id)a1 deletedValue:(id)a2 lastModifiedGeneration:(unsigned int)a3 clientId:(id)a4;
- (id)initWithPropertyType:(int)a0 name:(id)a1 value:(id)a2 lastModifiedGeneration:(unsigned int)a3 clientId:(id)a4;
- (id)initWithQuickDirtyCoder:(id)a0;
- (int)isd_quickDirtyCoderType;
- (id)lastModifiedByClientId;
- (int)lastModifiedByClientNumber;
- (unsigned int)lastModifiedGeneration;
- (void)markDeletedInGeneration:(unsigned int)a0;
- (void)replaceRecordId:(id)a0 withRecordId:(id)a1;
- (void)replaceRecordIds:(id)a0;
- (void)replaceRelationshipTupleId:(id)a0 withRelationshipTupleId:(id)a1;
- (void)setCollectionType:(int)a0;
- (void)setValue:(id)a0 inGeneration:(unsigned int)a1 byClientWithId:(id)a2;
- (id)valueDecodedIfNecessary;

@end
