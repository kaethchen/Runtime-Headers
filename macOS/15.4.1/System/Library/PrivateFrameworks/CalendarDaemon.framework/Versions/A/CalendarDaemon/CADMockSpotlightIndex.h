@class NSString, NSObject, CADMockSpotlightIndexProvider;
@protocol OS_dispatch_queue;

@interface CADMockSpotlightIndex : NSObject <CADSpotlightIndex> {
    CADMockSpotlightIndexProvider *_provider;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)indexSearchableItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteAllSearchableItemsForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (double)_artificialDelay;
- (BOOL)_incrementAndCheckIfShouldFailCall;
- (id)_mockFailureError;

@end
