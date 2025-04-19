@interface PMRDataSet : NSObject {
    struct DataSet { struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _values; } _data;
}

+ (id)dataSetWithGeometricMeanOfDataSets:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id).cxx_construct;
- (double)max;
- (double)valueAtIndex:(unsigned long long)a0;
- (double)min;
- (id)initWithValue:(double)a0;
- (id)initWithValues:(const double *)a0 count:(unsigned long long)a1;
- (double)average;
- (double)median;
- (const void *)_const_data;
- (void)enumerateValues:(id /* block */)a0;
- (double)geometricMean;
- (BOOL)isEqualToDataSet:(id)a0;

@end
