@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchLanguageContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_deviceDisplayLanguage;
    NSString *_deviceKeyboardLanguage;
    NSString *_deviceSpokenLanguage;
    NSMutableArray *_displayLanguages;
    NSMutableArray *_spokenLanguages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_deviceDisplayLanguage : 1; unsigned char read_deviceKeyboardLanguage : 1; unsigned char read_deviceSpokenLanguage : 1; unsigned char read_displayLanguages : 1; unsigned char read_spokenLanguages : 1; unsigned char wrote_anyField : 1; } _flags;
}

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
