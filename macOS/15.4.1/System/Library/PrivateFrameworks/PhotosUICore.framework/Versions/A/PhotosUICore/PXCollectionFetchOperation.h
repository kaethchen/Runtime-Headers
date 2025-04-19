@class PHCollection, PHFetchResult, PHFetchOptions;
@protocol PXCollectionFetchOperationDelegate;

@interface PXCollectionFetchOperation : NSOperation

@property (retain, nonatomic) PHFetchResult *outputFetchResult;
@property (weak, nonatomic) id<PXCollectionFetchOperationDelegate> delegate;
@property (retain, nonatomic) PHFetchOptions *fetchOptions;
@property (readonly, nonatomic) PHCollection *collection;

+ (id)fetchOperationWithCollection:(id)a0 delegate:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;
- (void)main;
- (void)handleBegin;
- (void)handleFinish;

@end
