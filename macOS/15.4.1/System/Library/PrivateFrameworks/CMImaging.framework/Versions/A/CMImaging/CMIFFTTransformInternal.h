@class NSString, CMIFFTContext, CMIFFTExecutor, NSArray;

@interface CMIFFTTransformInternal : NSObject <CMIFFTTransform> {
    CMIFFTContext *_context;
    CMIFFTExecutor *_executor;
    int _nDim;
    NSArray *_sizes;
    NSArray *_iStrides;
    NSArray *_oStrides;
    long long _layout;
    long long _precision;
    NSArray *_dimensions;
    unsigned long long _batchSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
