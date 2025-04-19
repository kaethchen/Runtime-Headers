@class NSString, _SFPBPerson, NSArray, NSData;

@interface _SFPBContactButtonItem : PBCodable <_SFPBContactButtonItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) _SFPBPerson *person;
@property (copy, nonatomic) NSArray *actionTypesToShows;
@property (nonatomic) unsigned long long uniqueId;
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
- (int)actionTypesToShowAtIndex:(unsigned long long)a0;
- (unsigned long long)actionTypesToShowCount;
- (void)addActionTypesToShow:(int)a0;
- (void)clearActionTypesToShow;
- (void)setActionTypesToShow:(id)a0;

@end
