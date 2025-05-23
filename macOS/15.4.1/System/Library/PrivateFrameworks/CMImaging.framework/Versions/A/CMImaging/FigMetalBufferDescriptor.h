@class NSString;

@interface FigMetalBufferDescriptor : NSObject

@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long options;
@property (nonatomic) int allocationHint;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 allocatorLabel:(id)a1;

@end
