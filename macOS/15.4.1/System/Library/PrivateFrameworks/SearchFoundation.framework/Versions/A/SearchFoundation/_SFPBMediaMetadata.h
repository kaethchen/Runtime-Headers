@class NSString, NSArray, NSData;

@interface _SFPBMediaMetadata : PBCodable <_SFPBMediaMetadata, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *mediaName;
@property (nonatomic) int mediaType;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSArray *mediaPunchouts;
@property (copy, nonatomic) NSArray *bundleIdentifiersToExcludes;
@property (copy, nonatomic) NSString *disambiguationTitle;
@property (copy, nonatomic) NSString *mediaIdentifier;
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
- (unsigned long long)bundleIdentifiersToExcludeCount;
- (void)clearBundleIdentifiersToExclude;
- (void)addBundleIdentifiersToExclude:(id)a0;
- (void)addMediaPunchouts:(id)a0;
- (id)bundleIdentifiersToExcludeAtIndex:(unsigned long long)a0;
- (void)clearMediaPunchouts;
- (id)mediaPunchoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)mediaPunchoutsCount;
- (void)setBundleIdentifiersToExclude:(id)a0;

@end
