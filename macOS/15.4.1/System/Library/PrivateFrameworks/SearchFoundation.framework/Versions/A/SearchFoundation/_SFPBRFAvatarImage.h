@class NSArray, NSData, NSString;

@interface _SFPBRFAvatarImage : PBCodable <_SFPBRFAvatarImage, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *contact_ids;
@property (nonatomic) int image_style;
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
- (void)addContact_ids:(id)a0;
- (void)clearContact_ids;
- (id)contact_idsAtIndex:(unsigned long long)a0;
- (unsigned long long)contact_idsCount;

@end
