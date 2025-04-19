@class NSAutounbinder, NSArray, NSDictionary, NSViewController, NSWindowController, NSStoryboard;

@interface NSWindowControllerMoreIVars : NSObject {
    NSAutounbinder *autounbinder;
    long long cascadeNumber;
    struct CGPoint { double x; double y; } cascadePoint;
    NSWindowController *_retainedSelf;
}

@property (retain) NSDictionary *externalObjectEntryTableForWindowLoading;
@property (retain) NSArray *topLevelObjectsToKeepAliveFromStoryboard;
@property (retain) NSArray *segueTemplates;
@property (retain) NSStoryboard *storyboard;
@property (retain) NSDictionary *segueDestinationOptions;
@property (retain) NSViewController *contentViewController;

- (void)dealloc;

@end
