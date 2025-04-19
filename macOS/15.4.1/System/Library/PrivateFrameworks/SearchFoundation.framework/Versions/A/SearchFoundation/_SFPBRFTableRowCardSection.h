@class NSArray, NSData, NSString;

@interface _SFPBRFTableRowCardSection : PBCodable <_SFPBRFTableRowCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *cells;
@property (nonatomic) int vertical_alignment;
@property (nonatomic) BOOL scale_to_fit;
@property (copy, nonatomic) NSArray *compact_cells;
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
- (void)addCells:(id)a0;
- (void)addCompact_cells:(id)a0;
- (id)cellsAtIndex:(unsigned long long)a0;
- (unsigned long long)cellsCount;
- (void)clearCells;
- (void)clearCompact_cells;
- (id)compact_cellsAtIndex:(unsigned long long)a0;
- (unsigned long long)compact_cellsCount;

@end
