@class NUComposition, NSString, NSArray, NSMutableArray, NUPriority, PAAutoCalculatorEntry, NSObject, PACompositionEditController;
@protocol OS_dispatch_queue;

@interface PAAutoCalculatorContext : NSObject <PAAutoCalculatorContext> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _completionHandler;
    NUComposition *_givenComposition;
    PACompositionEditController *_compositionEditController;
    NSString *_assetTypeName;
    NSMutableArray *_pendingAutoCalculators;
    PAAutoCalculatorEntry *_currentAutoCalculator;
    NSArray *_faces;
    BOOL _dirty;
    BOOL _canceled;
}

@property (retain) NUPriority *priority;
@property (readonly) PACompositionEditController *compositionEditController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)apertureRedEyeCompletionBlock;
+ (id /* block */)completionBlockForAutoCalculator:(id)a0;
+ (id)controlPointsFromDictionaries:(id)a0;
+ (id /* block */)curvesCompletionBlock;
+ (id /* block */)levelsLuminanceCompletionBlock;
+ (id /* block */)levelsRGBCompletionBlock;
+ (id /* block */)smartBWCompletionBlock;
+ (id /* block */)smartColorCompletionBlock;
+ (id /* block */)smartToneCompletionBlock;
+ (id /* block */)whiteBalanceCompletionBlock;

- (void).cxx_destruct;
- (void)cancel;
- (void)_complete:(BOOL)a0;
- (void)resolve:(id /* block */)a0;
- (BOOL)dirty;
- (void)fail:(id)a0;
- (void)_complete;
- (id)_calculatorForIdentifier:(id)a0 autoIdentifier:(id)a1;
- (void)_completeCurrentAutoCalculator;
- (id /* block */)_qosBlock:(id /* block */)a0;
- (void)_runAutoCalculator:(id)a0;
- (void)_sortAutoCalculators;
- (unsigned long long)_sortOrderForOperationIdentifier:(id)a0 renderPipelineVersion:(unsigned long long)a1;
- (void)_startNextAutoCalculator;
- (void)addAutoCalculator:(id)a0 operationUUID:(id)a1 operationIdentifier:(id)a2 autoIdentifier:(id)a3;
- (void)autoCalculator:(id)a0 calculatedSettings:(id)a1;
- (id)initWithCompositionEditController:(id)a0;
- (id)operationForAutoCalculator:(id)a0;
- (void)preparePendingAutoCalculators;

@end
