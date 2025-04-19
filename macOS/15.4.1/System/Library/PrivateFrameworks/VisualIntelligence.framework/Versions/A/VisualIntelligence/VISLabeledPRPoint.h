@class NSString, NSData;

@interface VISLabeledPRPoint : PBCodable <VISLabeledPRPoint, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float confidence;
@property (nonatomic) float precision;
@property (nonatomic) float recall;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *readable_label;
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

@end
