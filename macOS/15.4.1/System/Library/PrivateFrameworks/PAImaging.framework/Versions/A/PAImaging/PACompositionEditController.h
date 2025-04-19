@class NSString, NSMutableDictionary, DGDescription, PLEditSource;

@interface PACompositionEditController : PICompositionController <PICompositionControllerDelegate, NSCopying> {
    DGDescription *_renderDescription;
    PLEditSource *_editSource;
    BOOL _conversionTestingEnabled;
}

@property (nonatomic) struct PFIntSize_st { unsigned long long width; unsigned long long height; } inputSize;
@property (retain) NSMutableDictionary *autoSettingsStorage;
@property (nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly) long long orientation;
@property (retain) PLEditSource *editSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_conversionTestingEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)operations;
- (id)composition;
- (void)compositionController:(id)a0 didAddAdjustment:(id)a1;
- (void)compositionController:(id)a0 didRemoveAdjustment:(id)a1;
- (void)compositionController:(id)a0 didUpdateAdjustment:(id)a1;
- (void)compositionController:(id)a0 didUpdateAdjustments:(id)a1;
- (id)operationWithUUID:(id)a0;
- (void)handleNotification:(id)a0 forObserver:(id)a1;
- (void)_addEffectOperation:(id)a0;
- (id)_adjustmentForOperation:(id)a0;
- (id)_adjustmentForOperationUUID:(id)a0;
- (id)_compositionKeyForOperationIdentifier:(id)a0;
- (id)_initWithCompositionController:(id)a0 editSource:(id)a1;
- (id)_initWithCompositionController:(id)a0 editSource:(id)a1 inputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a2;
- (void)_invalidateRenderDescription;
- (id)_newGeometryRequest;
- (id)_operationForAdjustment:(id)a0;
- (id)_operationIdentifierForAdjustmentIdentifier:(id)a0;
- (id)_operationIdentifierForUUID:(id)a0;
- (id)_operationUUIDForIdentifier:(id)a0;
- (void)_postObserverNotification:(id)a0;
- (id)_rawCompositionController;
- (void)_setComposition:(id)a0;
- (void)_updateImagePropertiesForCompositionSync:(id)a0;
- (BOOL)canUseRAWReduceNoiseOperation;
- (id)firstOperationUUIDWithIdentifier:(id)a0;
- (id)firstOperationUUIDWithIdentifier:(id)a0 createIfNeeded:(id /* block */)a1;
- (id)initWithCompositionController:(id)a0 editSource:(id)a1;
- (void)inputSize:(id)a0 completion:(id /* block */)a1;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })inputSizeSync;
- (BOOL)isRAWInput;
- (void)notifyVideoComplementVisibilityChanged:(BOOL)a0;
- (void)removeOperationWithUUID:(id)a0;
- (id)renderDescription;
- (void)setComposition:(id)a0 editSource:(id)a1;

@end
