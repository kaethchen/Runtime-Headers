@class _SFPBSymbolImage, NSString, _SFPBImage, NSArray, NSData, _SFPBColor, _SFPBDrillDownMetadata;

@interface _SFPBPerformEntityQueryCommand : PBCodable <_SFPBPerformEntityQueryCommand, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSString *tokenString;
@property (retain, nonatomic) _SFPBSymbolImage *symbolImage;
@property (nonatomic) int entityType;
@property (copy, nonatomic) NSString *entityIdentifier;
@property (retain, nonatomic) _SFPBColor *entityBackgroundColor;
@property (retain, nonatomic) _SFPBDrillDownMetadata *metadata;
@property (retain, nonatomic) _SFPBDrillDownMetadata *drilldownMetadata;
@property (retain, nonatomic) _SFPBImage *tokenImage;
@property (copy, nonatomic) NSArray *filterQueries;
@property (copy, nonatomic) NSArray *enabledDomains;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)addEnabledDomains:(int)a0;
- (void)addFilterQueries:(id)a0;
- (void)clearEnabledDomains;
- (void)clearFilterQueries;
- (int)enabledDomainsAtIndex:(unsigned long long)a0;
- (unsigned long long)enabledDomainsCount;
- (id)filterQueriesAtIndex:(unsigned long long)a0;
- (unsigned long long)filterQueriesCount;

@end
