@class NSData, NSString, GEOPDMapsIdentifier;

@interface GEOMapItemIdentifier : NSObject <NSCopying, NSSecureCoding> {
    GEOPDMapsIdentifier *_mapsIdentifier;
    NSString *_mapsIdentifierString;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) int resultProviderID;
@property (readonly, nonatomic, getter=hasCoordinate) BOOL hasCoordinate;
@property (readonly, nonatomic) NSData *comparableRepresentation;
@property (readonly, nonatomic) BOOL hasMapsIdentifierString;
@property (readonly, nonatomic) NSString *mapsIdentifierString;

+ (id)mapItemIdentifiersFromMapsIdentifiers:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMapItem:(id)a0;
- (id)initWithBasemapId:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct { double x0; double x1; })a2;
- (id)initWithEncodedMapsIdentifier:(id)a0;
- (id)initWithMUID:(unsigned long long)a0;
- (id)initWithMUID:(unsigned long long)a0 coordinate:(struct { double x0; double x1; })a1;
- (id)initWithMUID:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct { double x0; double x1; })a2;
- (id)initWithMUID:(unsigned long long)a0 sourceID:(unsigned int)a1;
- (id)initWithMapsIdentifier:(id)a0;
- (id)initWithMapsIdentifierString:(id)a0;
- (id)initWithPlace:(id)a0;
- (BOOL)isEqualToGEOMapItemIdentifier:(id)a0;
- (BOOL)isValidForOfflineUse;
- (id)mapsIdentifier;
- (id)shortDebugDescription;

@end
