@class PXVideoProcessingOperationSpec;
@protocol PXVideoProcessingOperationResult;

@interface PXVideoProcessingOperation : NSOperation

@property (readonly, nonatomic) PXVideoProcessingOperationSpec *spec;
@property (readonly, nonatomic) id<PXVideoProcessingOperationResult> result;
@property (copy, nonatomic) id /* block */ progressHandler;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithSpec:(id)a0;
- (id)performProcessing;

@end
