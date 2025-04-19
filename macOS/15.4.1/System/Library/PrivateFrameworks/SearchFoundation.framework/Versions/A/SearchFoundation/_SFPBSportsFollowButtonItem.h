@class NSString, _SFPBSportsItem, NSData, _SFPBToggleButtonConfiguration;

@interface _SFPBSportsFollowButtonItem : PBCodable <_SFPBSportsFollowButtonItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBSportsItem *sportsItem;
@property (retain, nonatomic) _SFPBToggleButtonConfiguration *toggleButtonConfiguration;
@property (copy, nonatomic) NSString *fallbackTitle;
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

@end
