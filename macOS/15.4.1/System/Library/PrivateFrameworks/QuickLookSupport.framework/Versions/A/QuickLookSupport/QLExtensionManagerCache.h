@class NSMutableDictionary, NSDictionary, NSMapTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface QLExtensionManagerCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessMatchingExtensionsQueue;
    NSObject<OS_dispatch_queue> *_waitForExtensionListQueue;
    NSObject<OS_dispatch_queue> *_queryCacheQueue;
}

@property (retain, nonatomic) NSDictionary *matchingAttributes;
@property (retain, nonatomic) id matchingContext;
@property (retain, nonatomic) NSMutableDictionary *matchingExtensions;
@property (retain, nonatomic) NSMapTable *qlExtensions;
@property (retain, nonatomic) NSMutableDictionary *queryCache;
@property (nonatomic) BOOL isMatchingExtensions;
@property (retain) NSObject<OS_dispatch_semaphore> *waitForExtensionsSemaphore;

+ (id)bestMatchingExtensionsFromSupportingExtensions:(id)a0 includingExtensionsWithSupportingParentTypes:(BOOL)a1 byContentType:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)beginMatchingExtensions;
- (void)endMatchingExtensions;
- (void)_didReceiveNewMatchingExtensionList:(id)a0;
- (BOOL)_supportedContentTypesFromExtension:(id)a0 matches:(id)a1 allowMatchingWithParentTypes:(BOOL)a2;
- (void)_synchronouslyWaitForExtensionListIfNeeded;
- (id)extensionWithMatchingAttributes:(id)a0 allowExtensionsForParentTypes:(BOOL)a1 extensionPath:(id)a2;
- (id)extensionWithMatchingAttributes:(id)a0 allowExtensionsForParentTypes:(BOOL)a1 extensionPath:(id)a2 firstPartyExtension:(BOOL)a3;
- (BOOL)hasExtensionWithMatchingAttributes:(id)a0;
- (id)initWithMatchingAttributes:(id)a0;

@end
