@class PBUnknownFields;

@interface GEOLogMsgStateDeviceSettings : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _deviceDarkMode;
    BOOL _supportsAdvancedMap;
    struct { unsigned char has_deviceDarkMode : 1; unsigned char has_supportsAdvancedMap : 1; } _flags;
}

@property (nonatomic) BOOL hasDeviceDarkMode;
@property (nonatomic) BOOL deviceDarkMode;
@property (nonatomic) BOOL hasSupportsAdvancedMap;
@property (nonatomic) BOOL supportsAdvancedMap;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
