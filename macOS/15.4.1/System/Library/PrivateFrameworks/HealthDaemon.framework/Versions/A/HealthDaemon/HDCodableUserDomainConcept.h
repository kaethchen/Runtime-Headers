@class HDCodableSyncIdentity, NSString, NSData, HDCodableOntologyLocalizedEducationContent, NSMutableArray, HDCodableUserDomainConceptTypeIdentifier;

@interface HDCodableUserDomainConcept : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; unsigned char modificationDate : 1; unsigned char majorVersion : 1; unsigned char minorVersion : 1; unsigned char patchVersion : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) HDCodableUserDomainConceptTypeIdentifier *identifier;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (nonatomic) BOOL hasMajorVersion;
@property (nonatomic) int majorVersion;
@property (nonatomic) BOOL hasMinorVersion;
@property (nonatomic) int minorVersion;
@property (nonatomic) BOOL hasPatchVersion;
@property (nonatomic) int patchVersion;
@property (readonly, nonatomic) BOOL hasLinksData;
@property (retain, nonatomic) NSData *linksData;
@property (retain, nonatomic) NSMutableArray *codings;
@property (retain, nonatomic) NSMutableArray *links;
@property (retain, nonatomic) NSMutableArray *properties;
@property (retain, nonatomic) NSMutableArray *localizedStringProperties;
@property (readonly, nonatomic) BOOL hasOntologyLocalizedEducationContent;
@property (retain, nonatomic) HDCodableOntologyLocalizedEducationContent *ontologyLocalizedEducationContent;
@property (retain, nonatomic) NSMutableArray *namedQuantities;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;
@property (readonly, nonatomic) BOOL hasTypeData;
@property (retain, nonatomic) NSData *typeData;

+ (Class)propertiesType;
+ (Class)codingsType;
+ (Class)linksType;
+ (Class)localizedStringPropertiesType;
+ (Class)namedQuantitiesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearProperties;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)propertiesCount;
- (void)addProperties:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (unsigned long long)linksCount;
- (id)codingsAtIndex:(unsigned long long)a0;
- (void)addCodings:(id)a0;
- (void)addLinks:(id)a0;
- (void)addLocalizedStringProperties:(id)a0;
- (void)addNamedQuantities:(id)a0;
- (void)clearCodings;
- (void)clearLinks;
- (void)clearLocalizedStringProperties;
- (void)clearNamedQuantities;
- (unsigned long long)codingsCount;
- (id)linksAtIndex:(unsigned long long)a0;
- (id)localizedStringPropertiesAtIndex:(unsigned long long)a0;
- (unsigned long long)localizedStringPropertiesCount;
- (id)namedQuantitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)namedQuantitiesCount;

@end
