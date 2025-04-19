@class NSNumber, NSString;

@interface SSCAMetalLayerClientResourceUsageSummary : NSObject <SignpostJSONRepresentable>

@property (readonly, nonatomic) double peakPhysicalFootprintMiB;
@property (readonly, nonatomic) double averagePhysicalFootprintMiB;
@property (readonly, nonatomic) NSNumber *averageMemoryLimitHeadroomMiB;
@property (readonly, nonatomic) double diskReadsMiB;
@property (readonly, nonatomic) double diskReadsMiBPerSec;
@property (readonly, nonatomic) double diskWritesMiB;
@property (readonly, nonatomic) double diskWritesMiBPerSec;
@property (readonly, nonatomic) double diskLogicalWritesMiB;
@property (readonly, nonatomic) double diskLogicalWritesMiBPerSec;
@property (readonly, nonatomic) unsigned long long instructionCount;
@property (readonly, nonatomic) double instructionCountPerSec;
@property (readonly, nonatomic) unsigned long long pCoreInstructionCount;
@property (readonly, nonatomic) double pCoreInstructionCountPerSec;
@property (readonly, nonatomic) double totalDurationSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)jsonDescription:(unsigned long long)a0;
- (id)initWithIntervals:(id)a0;

@end
