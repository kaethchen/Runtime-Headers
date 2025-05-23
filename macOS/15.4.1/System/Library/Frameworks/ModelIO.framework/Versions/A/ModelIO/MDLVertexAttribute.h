@class NSString;

@interface MDLVertexAttribute : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long bufferIndex;
@property (nonatomic) double time;
@property (nonatomic) void /* unknown type, empty encoding */ initializationValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 format:(unsigned long long)a1 offset:(unsigned long long)a2 bufferIndex:(unsigned long long)a3;

@end
