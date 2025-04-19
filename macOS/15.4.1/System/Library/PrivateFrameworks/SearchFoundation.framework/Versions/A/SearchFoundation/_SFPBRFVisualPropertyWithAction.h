@class NSArray, NSString, _SFPBCommandButtonItem, NSData;

@interface _SFPBRFVisualPropertyWithAction : PBCodable <_SFPBRFVisualPropertyWithAction, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *visual_elements;
@property (nonatomic) BOOL is_safe_for_logging;
@property (retain, nonatomic) _SFPBCommandButtonItem *commandItem;
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
- (void)addVisual_elements:(id)a0;
- (void)clearVisual_elements;
- (id)visual_elementsAtIndex:(unsigned long long)a0;
- (unsigned long long)visual_elementsCount;

@end
