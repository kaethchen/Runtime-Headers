@class NSArray, NSString, NSData;

@interface _SFPBSafariTableOfContentsCardSection : PBCodable <_SFPBSafariTableOfContentsCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int tableOfContentsType;
@property (nonatomic) int tableOfContentsSource;
@property (copy, nonatomic) NSArray *tableOfContentsItems;
@property (copy, nonatomic) NSString *algorithmVersion;
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
- (void)addTableOfContentsItems:(id)a0;
- (void)clearTableOfContentsItems;
- (id)tableOfContentsItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)tableOfContentsItemsCount;

@end
