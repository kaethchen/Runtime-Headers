@interface IMCollaborationNoticeController : NSObject

+ (id)sharedInstance;

- (id)init;
- (id)listener;
- (void)collaborationNoticesDidChangeForChatGUIDs:(id)a0;
- (void)dismissNotice:(id)a0;
- (void)fetchCollaborationNoticesForChatGUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)markAsViewedForNotice:(id)a0;
- (id)remoteDaemon;

@end
