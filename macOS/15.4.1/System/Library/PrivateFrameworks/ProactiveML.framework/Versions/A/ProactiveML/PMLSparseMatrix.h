@interface PMLSparseMatrix : NSObject

@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (readonly, nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) BOOL isSymmetric;
@property (nonatomic) struct sparse_m_float { } *matrix;

+ (id)sparseMatrixFromNumbers:(id)a0;
+ (id)sparseMatrixWithNumberOfRows:(unsigned long long)a0 numberOfColumns:(unsigned long long)a1;

- (void)dealloc;
- (id)init;
- (float)maxValue;
- (float)minValue;
- (void)_enumerateSparseRowsWithBlock:(id /* block */)a0;
- (void)enumerateNonZeroValuesForRow:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)enumerateNonZeroValuesWithBlock:(id /* block */)a0;
- (id)initWithSparseMatrix:(struct sparse_m_float { } *)a0;
- (id)matrixWithConstantColumn;
- (float)valueAtRow:(unsigned long long)a0 column:(unsigned long long)a1;

@end
