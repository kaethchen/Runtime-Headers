@class NSArray;

@interface _ANEIOSurfaceOutputSets : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct __IOSurface { } *statsSurRef;
@property (readonly, nonatomic) NSArray *outputBuffer;

+ (id)new;
+ (id)objectWithstatsSurRef:(struct __IOSurface { } *)a0 outputBuffer:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithstatsSurRef:(struct __IOSurface { } *)a0 outputBuffer:(id)a1;

@end
