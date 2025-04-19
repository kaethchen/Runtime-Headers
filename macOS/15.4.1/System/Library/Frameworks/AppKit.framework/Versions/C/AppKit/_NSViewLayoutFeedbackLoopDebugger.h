@class NSArray, NSView, NSMutableSet, NSMutableArray;

@interface _NSViewLayoutFeedbackLoopDebugger : NSObject {
    long long _debuggingState;
    NSView *_rootView;
    NSMutableSet *_viewsWithChangingGeometry;
    NSMutableSet *_viewsWithVariableChangesTriggeringLayout;
    NSMutableSet *_turningPointViews;
    NSMutableSet *_involvedViews;
    NSMutableArray *_layoutList;
    NSArray *_reducedLayoutList;
    BOOL _rootViewConfirmed;
    BOOL _feedbackLoopConfirmed;
    long long _rootViewLayoutCount;
}

@property (retain, nonatomic) NSView *currentLayoutView;

+ (void)createLayoutFeedbackLoopDebuggerForUnitTests;
+ (void)destroyLayoutFeedbackLoopDebuggerForUnitTests;

- (id)description;
- (void).cxx_destruct;
- (void)dumpInfoWithInfoCollectionSuccess:(BOOL)a0;
- (id)topLevelViewHierarchyTrace;
- (id)turningPointViewsCreateIfNecessary;
- (id)viewsWithChangingGeometryCreateIfNecessary;
- (id)viewsWithVariableChangesTriggeringLayoutCreateIfNecessary;

@end
