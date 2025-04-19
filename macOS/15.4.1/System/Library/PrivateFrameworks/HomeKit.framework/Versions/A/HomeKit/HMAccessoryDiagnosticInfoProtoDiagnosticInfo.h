@class HMAccessoryDiagnosticInfoProtoSetupInfo, HMAccessoryDiagnosticInfoProtoAppleMediaAccessoryDiagnosticInfo, HMAccessoryDiagnosticInfoProtoPrimaryResidentDiagnosticInfo;

@interface HMAccessoryDiagnosticInfoProtoDiagnosticInfo : PBCodable <NSCopying> {
    struct { unsigned char generationTime : 1; unsigned char version : 1; unsigned char homeHubVersion : 1; unsigned char numHomes : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned long long version;
@property (readonly, nonatomic) BOOL hasAppleMediaAccessoryDiagnosticInfo;
@property (retain, nonatomic) HMAccessoryDiagnosticInfoProtoAppleMediaAccessoryDiagnosticInfo *appleMediaAccessoryDiagnosticInfo;
@property (readonly, nonatomic) BOOL hasPrimaryResidentDiagnosticInfo;
@property (retain, nonatomic) HMAccessoryDiagnosticInfoProtoPrimaryResidentDiagnosticInfo *primaryResidentDiagnosticInfo;
@property (nonatomic) BOOL hasHomeHubVersion;
@property (nonatomic) int homeHubVersion;
@property (nonatomic) BOOL hasNumHomes;
@property (nonatomic) int numHomes;
@property (readonly, nonatomic) BOOL hasLastSetupInfo;
@property (retain, nonatomic) HMAccessoryDiagnosticInfoProtoSetupInfo *lastSetupInfo;
@property (nonatomic) BOOL hasGenerationTime;
@property (nonatomic) double generationTime;

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

@end
