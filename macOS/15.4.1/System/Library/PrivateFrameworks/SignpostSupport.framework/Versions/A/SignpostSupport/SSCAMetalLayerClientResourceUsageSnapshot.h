@class NSNumber, NSString, NSDate;

@interface SSCAMetalLayerClientResourceUsageSnapshot : NSObject <SignpostJSONRepresentable>

@property (readonly, nonatomic) double timebaseRatio;
@property (readonly, nonatomic) NSDate *snapshotDate;
@property (readonly, nonatomic) unsigned long long snapshotMCT;
@property (readonly, nonatomic) double physicalFootprintMiB;
@property (readonly, nonatomic) double peakPhysicalFootprintMiB;
@property (readonly, nonatomic) double totalDiskReadsMiB;
@property (readonly, nonatomic) double totalDiskWritesMiB;
@property (readonly, nonatomic) double totalDiskLogicalWritesMiB;
@property (readonly, nonatomic) unsigned long long totalInstructionCount;
@property (readonly, nonatomic) unsigned long long totalPcoreInstructionCount;
@property (readonly, nonatomic) NSNumber *memoryLimitHeadroomMiB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)snapshotFromSignpostEvent:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)jsonDescription:(unsigned long long)a0;
- (id)initWithPhysicalFootprintMiB:(id)a0 peakPhysicalFootprint:(id)a1 totalDiskReads:(id)a2 totalDiskWrites:(id)a3 totalDiskLogicalWrites:(id)a4 totalInstructionCount:(id)a5 totalPcoreInstructionCount:(id)a6 date:(id)a7 mct:(unsigned long long)a8 optionalMemoryLimitHeadroom:(id)a9 timebaseRatio:(double)a10;

@end
