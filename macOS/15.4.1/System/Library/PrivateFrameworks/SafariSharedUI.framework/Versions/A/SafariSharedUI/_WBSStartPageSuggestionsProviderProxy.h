@class WBSStartPageSuggestionsProviderBroadcaster, NSString, NSArray;
@protocol WBSStartPageSuggestionsProviderDelegate;

@interface _WBSStartPageSuggestionsProviderProxy : NSObject <WBSStartPageSuggestionsProvider>

@property (weak, nonatomic) WBSStartPageSuggestionsProviderBroadcaster *owner;
@property (readonly, nonatomic) NSString *providerSectionIdentifier;
@property (weak, nonatomic) id<WBSStartPageSuggestionsProviderDelegate> suggestionsProviderDelegate;
@property (readonly, copy, nonatomic) NSArray *suggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
