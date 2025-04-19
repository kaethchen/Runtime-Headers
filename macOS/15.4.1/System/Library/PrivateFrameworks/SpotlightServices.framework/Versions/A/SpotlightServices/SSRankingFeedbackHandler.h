@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSRankingFeedbackHandler : NSObject

@property (retain) NSMutableDictionary *mapProtectionClassToBundleIdToItem;
@property (retain) NSMutableArray *sectionCSItems;
@property (retain) NSObject<OS_dispatch_queue> *countQueue;
@property (retain) NSObject<OS_dispatch_queue> *fetchQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
