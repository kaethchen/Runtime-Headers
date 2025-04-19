@class _INPBPrivateMediaIntentData, NSArray, NSString, NSData;

@interface _INPBPrivateSearchForMediaIntentData : PBCodable <_INPBPrivateSearchForMediaIntentData, NSSecureCoding, NSCopying> {
    struct { unsigned char appInferred : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL appInferred;
@property (nonatomic) BOOL hasAppInferred;
@property (copy, nonatomic) NSArray *audioSearchResults;
@property (readonly, nonatomic) unsigned long long audioSearchResultsCount;
@property (copy, nonatomic) NSArray *internalSignals;
@property (readonly, nonatomic) unsigned long long internalSignalsCount;
@property (copy, nonatomic) NSData *pegasusMetaData;
@property (readonly, nonatomic) BOOL hasPegasusMetaData;
@property (retain, nonatomic) _INPBPrivateMediaIntentData *privateMediaIntentData;
@property (readonly, nonatomic) BOOL hasPrivateMediaIntentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)audioSearchResultsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAudioSearchResults:(id)a0;
- (void)addInternalSignal:(id)a0;
- (id)audioSearchResultsAtIndex:(unsigned long long)a0;
- (void)clearAudioSearchResults;
- (void)clearInternalSignals;
- (id)internalSignalAtIndex:(unsigned long long)a0;

@end
