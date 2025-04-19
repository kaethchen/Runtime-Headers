@class PHMediaFormatConversionDestination;

@interface PLPTPConversionDestinationAssetReader : PLPTPAssetReader

@property (retain) PHMediaFormatConversionDestination *destination;

- (void).cxx_destruct;
- (id)path;
- (id)initWithDestination:(id)a0;
- (id)dataSourcePathForDataRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;

@end
