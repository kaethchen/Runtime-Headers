@class NSArray;

@interface PGGraphMemoriesEnrichmentProcessorMemoryNodesToSort : NSObject

@property (retain, nonatomic) NSArray *memoryNodesWithoutLocalMemory;
@property (retain, nonatomic) NSArray *memoryNodesWithoutLocalMemoryLastEnrichmentDate;
@property (retain, nonatomic) NSArray *memoryNodesWithLocalMemoryLastEnrichmentDate;

- (id)init;
- (void).cxx_destruct;

@end
