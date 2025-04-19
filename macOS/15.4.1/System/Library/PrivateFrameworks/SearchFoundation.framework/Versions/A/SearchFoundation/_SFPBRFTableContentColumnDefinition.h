@class NSData, NSString;

@interface _SFPBRFTableContentColumnDefinition : PBCodable <_SFPBRFTableContentColumnDefinition, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float size_percent;
@property (nonatomic) int horizontal_alignment;
@property (nonatomic) int drop_order;
@property (nonatomic) int equal_size_column_group;
@property (nonatomic) BOOL disable_truncation;
@property (nonatomic) BOOL should_drop_in_flow_layout;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
