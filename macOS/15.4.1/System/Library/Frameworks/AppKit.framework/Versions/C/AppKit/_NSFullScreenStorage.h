@class NSSet, NSString, NSScreen;

@interface _NSFullScreenStorage : NSObject

@property (copy) NSSet *participatingWindowNumbersDuringEnterTransition;
@property (copy) NSSet *participatingWindowNumbersDuringExitTransition;
@property unsigned long long startingSpaceID;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } savedFrame;
@property (copy) NSString *stringWithSavedFrame;
@property BOOL toolbarWasHidden;
@property (retain) NSScreen *savedScreen;
@property struct CGSize { double width; double height; } userTilePreferredSize;
@property BOOL windowJoinedTileOnCreation;

- (void)dealloc;

@end
