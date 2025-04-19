@class UMUser;

@interface UMMobileKeyBag : NSObject

@property (class, readonly, nonatomic) UMUser *lastLoggedInUser;

+ (void)initialize;
+ (BOOL)stopSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (id)allSyncBubbleUsers;
+ (BOOL)clearSyncBubblesWithOutError:(id *)a0;
+ (id)currentSyncBubbleUser;
+ (id)queuedSyncBubbleUsers;
+ (BOOL)startSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (id)syncBubbleMachServiceNamesForUser:(id)a0;

@end
