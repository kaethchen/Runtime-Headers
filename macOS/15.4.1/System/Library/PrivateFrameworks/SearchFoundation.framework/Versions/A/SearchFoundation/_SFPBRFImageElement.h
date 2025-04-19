@class NSArray, NSData, NSString;

@interface _SFPBRFImageElement : PBCodable <_SFPBRFImageElement, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *sources;
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
- (void)clearSources;
- (id)initWithJSON:(id)a0;
- (unsigned long long)sourcesCount;
- (id)initWithFacade:(id)a0;
- (id)sourcesAtIndex:(unsigned long long)a0;
- (void)addSources:(id)a0;

@end
