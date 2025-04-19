@class AVLazyValueLoadingMetadataItemInternal;

@interface AVLazyValueLoadingMetadataItem : AVMetadataItem {
    AVLazyValueLoadingMetadataItemInternal *_lazyMetadataItem;
}

+ (id)metadataItemWithPropertiesOfMetadataItem:(id)a0 valueLoadingHandler:(id /* block */)a1;

- (void)dealloc;
- (id)value;
- (id)dataType;
- (id)_initWithFigMetadataDictionary:(id)a0 valueLoadingHandler:(id /* block */)a1;
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)a0;
- (void)_valueRequestDidFinish;
- (long long)_valueStatus;
- (void)_waitForLoadingOfValueDependentKey:(id)a0;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;

@end
