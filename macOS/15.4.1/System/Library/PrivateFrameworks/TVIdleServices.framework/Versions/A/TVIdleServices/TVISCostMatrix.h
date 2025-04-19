@class NSIndexPath;

@interface TVISCostMatrix : NSObject {
    struct { BOOL isOptimumIndexPathEvaluated; } _flags;
}

@property (readonly, nonatomic) char *matrix;
@property (readonly, nonatomic) unsigned long long dimension;
@property (readonly, nonatomic) NSIndexPath *optimumIndexPath;

+ (id)_defaultIndexPathForDimension:(unsigned long long)a0;
+ (id)costMatrixWithContentsOfFileAtURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_calculateOptimumIndexPath;
- (id)costMatrixByAddingCostMatrix:(id)a0;
- (id)costMatrixForSubsetIndexes:(id)a0;
- (id)initWithElements:(char *)a0 dimension:(unsigned long long)a1;
- (id)initWithMatrix:(char *)a0 dimension:(unsigned long long)a1;

@end
