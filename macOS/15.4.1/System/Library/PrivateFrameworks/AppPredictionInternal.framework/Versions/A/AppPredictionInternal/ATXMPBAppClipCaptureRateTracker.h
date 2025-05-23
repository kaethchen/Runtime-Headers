@class NSString;

@interface ATXMPBAppClipCaptureRateTracker : PBCodable <NSCopying> {
    struct { unsigned char captureType : 1; } _has;
}

@property (nonatomic) BOOL hasCaptureType;
@property (nonatomic) int captureType;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasUrlHash;
@property (retain, nonatomic) NSString *urlHash;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsCaptureType:(id)a0;
- (id)captureTypeAsString:(int)a0;

@end
