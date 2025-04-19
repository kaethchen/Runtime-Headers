@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOSearchAttributionSource : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _attributionRequirements;
    struct { int *list; unsigned long long count; unsigned long long size; } _suppressAttributionLogos;
    NSString *_appAdamID;
    NSMutableArray *_attributionApps;
    NSMutableArray *_localizedAttributions;
    NSString *_sourceIdentifier;
    NSMutableArray *_supportedComponentActions;
    NSString *_webBaseActionURL;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _sourceVersion;
    BOOL _devPlaceCardAttr;
    BOOL _enforceAppStore;
    BOOL _requiresAttributionInPhotoViewerHeader;
    struct { unsigned char has_devPlaceCardAttr : 1; unsigned char has_enforceAppStore : 1; unsigned char has_requiresAttributionInPhotoViewerHeader : 1; unsigned char read_unknownFields : 1; unsigned char read_attributionRequirements : 1; unsigned char read_suppressAttributionLogos : 1; unsigned char read_appAdamID : 1; unsigned char read_attributionApps : 1; unsigned char read_localizedAttributions : 1; unsigned char read_sourceIdentifier : 1; unsigned char read_supportedComponentActions : 1; unsigned char read_webBaseActionURL : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
