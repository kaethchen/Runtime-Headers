@class NSArray;

@interface ANSTTensorDescriptor : ANSTDescriptor {
    unsigned long long *_lengths;
    unsigned long long *_strides;
}

@property (readonly, copy, nonatomic) NSArray *lengths;
@property (readonly, copy, nonatomic) NSArray *strides;
@property (readonly, nonatomic) unsigned long long sizeInBytes;
@property (readonly, nonatomic) unsigned long long _minimumContiguousLength;
@property (readonly, nonatomic) unsigned long long dataType;
@property (readonly, nonatomic) unsigned long long numberOfDimensions;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 dataType:(unsigned long long)a1 numberOfDimensions:(unsigned long long)a2 lengths:(const unsigned long long *)a3 strides:(const unsigned long long *)a4 error:(id *)a5;
- (id)initWithName:(id)a0 dataType:(unsigned long long)a1 lengths:(id)a2 strides:(id)a3 error:(id *)a4;
- (id)initWithName:(id)a0 dataType:(unsigned long long)a1 numberOfDimensions:(unsigned long long)a2 lengths:(const unsigned long long *)a3 alignment:(unsigned long long)a4 error:(id *)a5;
- (unsigned long long)lengthOfDimensionAt:(unsigned long long)a0;
- (unsigned long long)strideOfDimensionAt:(unsigned long long)a0;

@end
