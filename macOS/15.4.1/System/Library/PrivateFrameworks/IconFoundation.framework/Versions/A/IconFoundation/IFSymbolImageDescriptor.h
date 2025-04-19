@interface IFSymbolImageDescriptor : NSObject <NSCopying>

@property (nonatomic) double pointSize;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long symbolSize;
@property (nonatomic) long long symbolWeight;
@property (nonatomic) long long layoutDirection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setSize:(unsigned long long)a0;
- (unsigned long long)size;
- (void)setWeight:(unsigned long long)a0;
- (unsigned long long)weight;
- (id)digest;

@end
