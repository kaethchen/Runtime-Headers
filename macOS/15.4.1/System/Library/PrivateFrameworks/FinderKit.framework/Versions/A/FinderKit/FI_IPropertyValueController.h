@class FI_TPropertyAsyncExtractionOperation, NSString, FI_IPropertyValueExtractor, NSObject;

@interface FI_IPropertyValueController : FI_TViewController <TMarkTornDown>

@property (retain, nonatomic) NSObject *value;
@property (retain, nonatomic) FI_IPropertyValueExtractor *valueExtractor;
@property (nonatomic) BOOL shouldBeVisible;
@property (nonatomic) BOOL shouldBeEnabled;
@property (nonatomic) struct optional<unsigned long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } syncCountThreshold;
@property (readonly, nonatomic) BOOL visibleWhileLoadingAsync;
@property (weak, nonatomic) FI_TPropertyAsyncExtractionOperation *currentAsyncOperation;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyValueController;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)defaultValue;
- (void)flush;
- (void)aboutToTearDown;
- (void)initCommon;
- (BOOL)canModifyNodes:(const void *)a0;
- (id)extractValueFromNodes:(const void *)a0;
- (void)handleBulkNodesChanged:(const void *)a0 observedNodes:(const void *)a1;
- (void)handleBulkNodesDeleted:(const void *)a0 observedNodes:(const void *)a1;
- (void)handleNodeMDAttributesChanged:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 attributes:(id)a1 isDisplayAttributes:(BOOL)a2;
- (void)handleNodesGoingAway:(const void *)a0;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;
- (void)setIsApplicableToNodesGetter:(const void *)a0;
- (void)setNeedsUpdateForPropertyGetter:(const void *)a0;
- (void)setValueFromNodesExtractor:(const void *)a0;
- (void)updateWithNodes:(const void *)a0;
- (BOOL)willAsyncUpdateWithNodes:(const void *)a0;

@end
