@class NSObject;
@protocol OS_dispatch_queue;

@interface SOExtensionFinder : NSObject {
    NSObject<OS_dispatch_queue> *_extensionFinderQueue;
    id _matchingContext;
}

- (id)init;
- (void).cxx_destruct;
- (id)_soExtensionsForExtensions:(id)a0;
- (void)beginMatchingExtensionsWithCompletion:(id /* block */)a0;
- (void)endMatchingExtensions;
- (void)findExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)findExtensionsWithCompletion:(id /* block */)a0;

@end
