@class GKGame, NSString, NSURL, GKAchievement, GKScore, GKLeaderboard, NSImage, GKDispatchGroup;

@interface GKShareItem : NSObject <NSPasteboardWriting>

@property (retain) NSString *title;
@property (retain) NSString *subject;
@property (retain) NSString *message;
@property (retain) NSURL *url;
@property (retain) NSImage *image;
@property (retain) GKDispatchGroup *loadGroup;
@property (retain) GKAchievement *itemAchievement;
@property (retain) GKGame *itemGame;
@property (retain) GKScore *itemScore;
@property (retain) GKLeaderboard *itemLeaderboard;
@property int shareType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareItemWithScore:(id)a0 leaderboard:(id)a1;
+ (id)shareItemWithAchievement:(id)a0;
+ (id)shareItemWithMultiplayerURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (void)composeImage;
- (id)attributedStringForMessage;
- (void)imageWithCompletionHandler:(id /* block */)a0;

@end
