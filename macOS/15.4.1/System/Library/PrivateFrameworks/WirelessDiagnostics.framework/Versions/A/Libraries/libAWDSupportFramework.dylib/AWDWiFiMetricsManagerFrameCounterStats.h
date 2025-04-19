@class AWDDataFrames, AWDControlFrames, AWDManagementFrames;

@interface AWDWiFiMetricsManagerFrameCounterStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasRxControl;
@property (retain, nonatomic) AWDControlFrames *rxControl;
@property (readonly, nonatomic) BOOL hasTxControl;
@property (retain, nonatomic) AWDControlFrames *txControl;
@property (readonly, nonatomic) BOOL hasRxData;
@property (retain, nonatomic) AWDDataFrames *rxData;
@property (readonly, nonatomic) BOOL hasTxData;
@property (retain, nonatomic) AWDDataFrames *txData;
@property (readonly, nonatomic) BOOL hasRxManagement;
@property (retain, nonatomic) AWDManagementFrames *rxManagement;
@property (readonly, nonatomic) BOOL hasTxManagement;
@property (retain, nonatomic) AWDManagementFrames *txManagement;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
