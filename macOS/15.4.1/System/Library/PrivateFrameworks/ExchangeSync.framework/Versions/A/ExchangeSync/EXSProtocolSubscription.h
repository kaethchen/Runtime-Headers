@class NSArray;
@protocol EXSProtocolSubscriptionDelegate;

@interface EXSProtocolSubscription : NSObject

@property (weak) id<EXSProtocolSubscriptionDelegate> delegate;
@property (copy) NSArray *folderIDs;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)subscribe;
- (void)unsubscribe;
- (id)initWithDelegate:(id)a0 andFolderIDs:(id)a1;

@end
