@class NSArray, _MXExtensionMatchingMerger, _MXExtensionDispatchCenter, _MXExtensionServiceCenter, _MXAssetStorage;

@interface _MXExtensionProvider : NSObject {
    Class _extensionMatchingClass;
    id _matchingContext;
    NSArray *_blacklistedExtensions;
    NSArray *_blacklistedContainingApplications;
}

@property (retain, nonatomic) _MXExtensionMatchingMerger *merger;
@property (retain, nonatomic) _MXExtensionDispatchCenter *dispatchCenter;
@property (retain, nonatomic) _MXExtensionServiceCenter *serviceCenter;
@property (retain, nonatomic) _MXAssetStorage *assetStorage;

+ (id)sharedProvider;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_beginMatchingExtensionsIfNeeded;
- (id)_currentExtensions;
- (BOOL)_disableExtension:(id)a0 error:(id *)a1;
- (BOOL)_enableExtension:(id)a0 error:(id *)a1;
- (void)_endMatchingExtensionsIfNeeded;
- (id)_extensionWithIdentifier:(id)a0;
- (id)_extensionsByFilteringBlacklistedExtensionsFromArray:(id)a0;
- (id)_intentClassFilter:(id)a0;
- (void)_restartMatchingExtensionsForDefaultsChange;
- (id)addExtensionsUpdateHandler:(id /* block */)a0;
- (void)removeExtensionUpdateHandler:(id)a0;
- (id)siblingExtensionsWithContainingAppIdentifer:(id)a0;

@end
