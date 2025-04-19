@class NSArray;

@interface PIInpaintAdjustmentDelta : NSObject

@property (copy, nonatomic) NSArray *operations;
@property (copy, nonatomic) NSArray *masks;

- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithOperations:(id)a0 masks:(id)a1;
- (id)redactedCopy;

@end
