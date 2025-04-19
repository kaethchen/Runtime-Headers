@interface ICCFTypeWrapper : NSObject

@property (nonatomic) void *cfTypeRef;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void *)ref;
- (id)initWithCFTypeRef:(void *)a0;

@end
