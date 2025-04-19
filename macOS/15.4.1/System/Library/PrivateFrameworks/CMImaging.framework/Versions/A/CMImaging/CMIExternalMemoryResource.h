@class FigMetalAllocatorBackend;

@interface CMIExternalMemoryResource : NSObject

@property (retain, nonatomic) FigMetalAllocatorBackend *allocatorBackend;

- (id)description;
- (void).cxx_destruct;

@end
