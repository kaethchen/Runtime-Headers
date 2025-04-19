@interface CBFloatArray : NSObject {
    float *_data;
    unsigned long long _count;
    unsigned long long _size;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (const float *)data;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithCount:(unsigned long long)a0;
- (const float *)at:(unsigned long long)a0;
- (id)copyNSArray;
- (float *)dataCopy;
- (float)get:(unsigned long long)a0;
- (id)initWithValues:(float *)a0 andCount:(unsigned long long)a1;
- (float *)mutableData;

@end
