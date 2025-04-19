@protocol MTLBuffer;

@interface MPSPredicate : NSObject

@property (readonly, retain, nonatomic) id<MTLBuffer> predicateBuffer;
@property (readonly, nonatomic) unsigned long long predicateOffset;

+ (id)predicateWithBuffer:(id)a0 offset:(unsigned long long)a1;

- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)initWithDevice:(id)a0;
- (id)debugQuickLookObject;
- (id)initWithBuffer:(id)a0 offset:(unsigned long long)a1;

@end
