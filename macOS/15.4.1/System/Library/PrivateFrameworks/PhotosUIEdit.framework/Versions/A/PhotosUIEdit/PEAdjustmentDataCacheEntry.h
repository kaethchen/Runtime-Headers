@class NSString, PICompositionController, NSObject;
@protocol OS_dispatch_group;

@interface PEAdjustmentDataCacheEntry : NSObject

@property (retain) NSObject<OS_dispatch_group> *group;
@property (retain) NSObject<OS_dispatch_group> *timeoutGroup;
@property (retain) PICompositionController *compositionController;
@property long long disposition;
@property struct CGSize { double width; double height; } inputSize;
@property (retain) NSString *editorBundleID;

+ (id)_resultHandlingQueue;

- (void).cxx_destruct;
- (void)_load:(id)a0 networkAccessAllowed:(BOOL)a1 originalAdjustmentData:(BOOL)a2;
- (void)deliverOn:(id)a0 completion:(id /* block */)a1;
- (id)initWithAsset:(id)a0 networkAccessAllowed:(BOOL)a1 originalAdjustmentData:(BOOL)a2;
- (void)waitForResultsWithTimeout;

@end
