@class AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxConfigPerCellGroup, AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxSecondaryConfigPerCellGroup;

@interface AWDMETRICSKCellularPowerLogNRCdrxConfig : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char subsId : 1; unsigned char isEndc : 1; unsigned char vonrCallOngoing : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasMcgDefaultDrx;
@property (retain, nonatomic) AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxConfigPerCellGroup *mcgDefaultDrx;
@property (readonly, nonatomic) BOOL hasMcgSecondaryDrx;
@property (retain, nonatomic) AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxSecondaryConfigPerCellGroup *mcgSecondaryDrx;
@property (readonly, nonatomic) BOOL hasScgDefaultDrx;
@property (retain, nonatomic) AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxConfigPerCellGroup *scgDefaultDrx;
@property (readonly, nonatomic) BOOL hasScgSecondaryDrx;
@property (retain, nonatomic) AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxSecondaryConfigPerCellGroup *scgSecondaryDrx;
@property (readonly, nonatomic) BOOL hasEndcScgDefaultDrx;
@property (retain, nonatomic) AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxConfigPerCellGroup *endcScgDefaultDrx;
@property (readonly, nonatomic) BOOL hasEndcScgSecondaryDrx;
@property (retain, nonatomic) AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxSecondaryConfigPerCellGroup *endcScgSecondaryDrx;
@property (nonatomic) BOOL hasVonrCallOngoing;
@property (nonatomic) BOOL vonrCallOngoing;
@property (nonatomic) BOOL hasIsEndc;
@property (nonatomic) BOOL isEndc;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

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
