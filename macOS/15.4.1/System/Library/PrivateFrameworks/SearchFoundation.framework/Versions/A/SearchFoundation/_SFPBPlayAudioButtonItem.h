@class _SFPBMediaMetadata, NSString, NSData, _SFPBAudioData, _SFPBToggleButtonConfiguration;

@interface _SFPBPlayAudioButtonItem : PBCodable <_SFPBPlayAudioButtonItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBMediaMetadata *mediaMetadata;
@property (retain, nonatomic) _SFPBToggleButtonConfiguration *toggleButtonConfiguration;
@property (retain, nonatomic) _SFPBAudioData *audioData;
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
