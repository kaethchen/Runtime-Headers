@class NSString, NSNumber, NSMutableArray;

@interface CellularStateRelay : NetworkStateRelay

@property (nonatomic) char nrFrequencyBand;
@property (nonatomic) BOOL ratSelectionIsNR;
@property (nonatomic) int cellMNC;
@property (nonatomic) int cellMCC;
@property (nonatomic) int cellUARFCN;
@property (nonatomic) int cellPID;
@property (nonatomic) int cellBandInfo;
@property (nonatomic) int cellRSRP;
@property (nonatomic) double cellSNR;
@property (retain, nonatomic) NSString *cellType;
@property (nonatomic) int cellBandwidth;
@property (nonatomic) int cellTAC;
@property (nonatomic) BOOL cellRrcConnected;
@property (retain, nonatomic) NSNumber *ratSelectionMask;
@property (retain, nonatomic) NSString *ratSelectionCurrent;
@property (retain, nonatomic) NSString *ratSelectionPreferred;
@property (nonatomic) BOOL isNonTerrestrialNetworkActive;
@property (nonatomic) BOOL isStewieActive;
@property (nonatomic) unsigned long long cellSPIType;
@property (readonly, nonatomic) unsigned char cellDualSimStatus;
@property (readonly, nonatomic) int cellNonPreferredMNC;
@property (readonly, nonatomic) int cellNonPreferredMCC;
@property (readonly, nonatomic) NSMutableArray *networkSlicingStates;

- (void).cxx_destruct;

@end
