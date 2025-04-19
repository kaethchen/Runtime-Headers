@class NSSet, NSString, NSURL, NSOperationQueue;

@interface SFCollaborationFileMetadataLoader : NSObject <NSFilePresenter>

@property (readonly, copy, nonatomic) NSURL *presentedItemURL;
@property (readonly, nonatomic) NSOperationQueue *presentedItemOperationQueue;
@property (nonatomic) BOOL waitingForUbiquityChange;
@property (copy, nonatomic) id /* block */ loadCompletionHandler;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
