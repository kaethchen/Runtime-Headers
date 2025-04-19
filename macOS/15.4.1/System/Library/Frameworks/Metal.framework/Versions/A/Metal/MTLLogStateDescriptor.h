@interface MTLLogStateDescriptor : NSObject <NSCopying>

@property long long level;
@property long long bufferSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
