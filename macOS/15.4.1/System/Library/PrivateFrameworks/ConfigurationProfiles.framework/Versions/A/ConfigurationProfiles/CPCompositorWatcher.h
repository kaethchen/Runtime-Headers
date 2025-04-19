@class NSString, NSArray, NSMutableArray;

@interface CPCompositorWatcher : NSObject {
    NSString *mProfileUUID;
    NSArray *mUIDs;
    NSMutableArray *mRemainingUIDs;
    BOOL mDone;
}

- (void)dealloc;
- (BOOL)isDone;
- (id)getUIDs;
- (id)initForProfile:(id)a0;
- (id)gatherLoggedInUserUIDs;
- (id)getProfileUUID;
- (void)notificationReceived:(id)a0;
- (void)setUIDs:(id)a0;

@end
