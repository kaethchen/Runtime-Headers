@class NSObject, VisionCoreNamedObjects, VisionCoreE5RTExecutionPrewarmedState;
@protocol OS_dispatch_queue;

@interface VisionCoreE5RTExecutionContextConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) VisionCoreE5RTExecutionPrewarmedState *prewarmedState;
@property (copy, nonatomic) VisionCoreNamedObjects *boundInputObjects;
@property (copy, nonatomic) VisionCoreNamedObjects *boundOutputObjects;
@property (nonatomic) BOOL prewireInUseAllocations;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
