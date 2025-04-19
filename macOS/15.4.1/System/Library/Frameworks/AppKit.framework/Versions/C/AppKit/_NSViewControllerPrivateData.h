@class NSArray, NSViewController, NSDictionary, NSString, NSMutableArray, NSStoryboard;

@interface _NSViewControllerPrivateData : NSObject {
    struct { unsigned char preventInsertAndRemoveChildViewControllersFromSendingKVO : 1; unsigned char _sentViewWillAppear : 1; unsigned char _sentViewWillDisappear : 1; unsigned char _sentViewDidLoad : 1; unsigned char _scheduledBridgedServiceLayoutPropertyChange : 1; unsigned int _reserved : 27; } _flags;
}

@property NSViewController *parentViewController;
@property (retain) NSMutableArray *childViewControllers;
@property (retain) NSMutableArray *presentedViewControllers;
@property struct _NSModalSession { } *modalSessionForPresentedViewController;
@property long long appearanceTransitionCount;
@property (retain) NSArray *segueTemplates;
@property (retain) NSStoryboard *storyboard;
@property (retain) NSDictionary *segueDestinationOptions;
@property (retain) NSDictionary *externalObjectEntryTableForViewLoading;
@property (retain) NSArray *topLevelObjectsToKeepAliveFromStoryboard;
@property (copy) NSString *identifier;
@property (copy) id /* block */ constrainServiceScreenFrameBlock;

- (void)dealloc;

@end
