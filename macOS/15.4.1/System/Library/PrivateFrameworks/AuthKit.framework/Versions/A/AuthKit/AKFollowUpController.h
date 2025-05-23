@class NSString, FLFollowUpController;

@interface AKFollowUpController : NSObject <AKFollowUpProvider> {
    FLFollowUpController *_followupController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)addFollowUpItems:(id)a0 error:(id *)a1;
- (BOOL)clearNotificationsForItem:(id)a0 error:(id *)a1;
- (id)initWithFLFollowupController:(id)a0;
- (id)pendingFollowUpItems:(id *)a0;
- (BOOL)removeAllFollowUpItems:(id *)a0;
- (BOOL)removeFollowUpItems:(id)a0 error:(id *)a1;
- (BOOL)removeFollowUpItemsWithIdentifiers:(id)a0 error:(id *)a1;

@end
