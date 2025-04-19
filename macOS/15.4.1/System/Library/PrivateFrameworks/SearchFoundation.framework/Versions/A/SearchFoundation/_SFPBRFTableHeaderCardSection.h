@class NSArray, NSData, NSString;

@interface _SFPBRFTableHeaderCardSection : PBCodable <_SFPBRFTableHeaderCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *columns;
@property (copy, nonatomic) NSArray *cells;
@property (copy, nonatomic) NSArray *compact_cells;
@property (nonatomic) int should_repeat_header_in_flow_layout;
@property (nonatomic) int vertical_alignment;
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
- (void)addColumns:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;
- (id)columnsAtIndex:(unsigned long long)a0;
- (void)addCells:(id)a0;
- (void)addCompact_cells:(id)a0;
- (id)cellsAtIndex:(unsigned long long)a0;
- (unsigned long long)cellsCount;
- (void)clearCells;
- (void)clearColumns;
- (void)clearCompact_cells;
- (unsigned long long)columnsCount;
- (id)compact_cellsAtIndex:(unsigned long long)a0;
- (unsigned long long)compact_cellsCount;

@end
