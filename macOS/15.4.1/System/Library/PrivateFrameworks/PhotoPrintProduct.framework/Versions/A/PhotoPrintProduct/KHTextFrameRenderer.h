@class KHFrame, NSString, NSRecursiveLock, NSOperationQueue, NSTextStorage, KHTextLayoutManager;

@interface KHTextFrameRenderer : KHFrameRenderer <NSTextStorageDelegate> {
    NSTextStorage *_textStorage;
    KHTextLayoutManager *_layoutManager;
    BOOL _textIsClipped;
    NSRecursiveLock *_textManagementLock;
}

@property (retain, nonatomic) KHFrame *autoColorSource;
@property (retain, nonatomic) NSOperationQueue *evaluationQueue;
@property BOOL validClippingCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)textContainers;
- (id)stringAttributes;
- (id)placeholderAttributes;
- (void)doneEditing;
- (void)textDidChange;
- (void)_ensureValidTextStorage;
- (void)_evaluateAutoColorForSource:(id)a0 target:(id)a1 environment:(id)a2;
- (void)_fillFrameWithString:(id)a0 exact:(BOOL)a1 fillStyle:(int)a2;
- (void)_notifyPlacedPhotosChanged:(id)a0;
- (struct CGPoint { double x0; double x1; })_originForTextContainerAtIndex:(unsigned long long)a0 exact:(BOOL)a1;
- (void)_processEditing:(BOOL)a0 external:(BOOL)a1;
- (void)_processEditing:(BOOL)a0 external:(BOOL)a1 withString:(id)a2;
- (BOOL)_resizeTextFrameToFit;
- (void)_setupTextSystem;
- (BOOL)_shouldDrawFakeText;
- (void)applyStyleAttributes;
- (void)applyStyleAttributesWithForce:(BOOL)a0;
- (BOOL)checkClippedText;
- (void)evaluateForAutoColorWithEnvironment:(id)a0 asynchronous:(BOOL)a1;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (void)fillFrameWithString:(id)a0 exact:(BOOL)a1 repeat:(BOOL)a2;
- (void)fillTemplateThumbnailContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (void)fitTextStorageToFrameWithMode:(unsigned long long)a0;
- (BOOL)hasEmptyText;
- (void)loadAttributes;
- (struct CGSize { double x0; double x1; })preferredTextFrameSize;
- (void)setupTextContainers;
- (void)textAttributesDidChangeExternally;
- (void)textDidChangeExternally:(id)a0 momentary:(BOOL)a1;
- (id)textManagementLock;
- (BOOL)textMatchesMaster;

@end
