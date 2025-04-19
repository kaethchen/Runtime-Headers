@class NSString;

@interface _MRUpdateActiveSystemEndpointRequestProtobuf : PBCodable <NSCopying> {
    struct { unsigned char disableDuration : 1; unsigned char type : 1; unsigned char changeType : 1; unsigned char demoteWhenSyncingToCompanion : 1; unsigned char pairedDeviceSync : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;
@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) int changeType;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) BOOL hasPairedDeviceSync;
@property (nonatomic) BOOL pairedDeviceSync;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL hasDisableDuration;
@property (nonatomic) double disableDuration;
@property (nonatomic) BOOL hasDemoteWhenSyncingToCompanion;
@property (nonatomic) BOOL demoteWhenSyncingToCompanion;

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
- (int)StringAsChangeType:(id)a0;
- (id)changeTypeAsString:(int)a0;

@end
