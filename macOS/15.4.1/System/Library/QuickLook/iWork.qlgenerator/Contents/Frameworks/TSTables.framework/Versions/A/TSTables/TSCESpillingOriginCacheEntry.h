@class TSCEError;

@interface TSCESpillingOriginCacheEntry : NSObject

@property (retain, nonatomic) TSCEError *error;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } spillRange;

- (void).cxx_destruct;

@end
