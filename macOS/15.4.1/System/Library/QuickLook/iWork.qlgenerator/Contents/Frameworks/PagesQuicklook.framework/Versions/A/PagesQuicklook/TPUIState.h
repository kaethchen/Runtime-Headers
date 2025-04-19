@class TSKPencilAnnotationUIState, NSString, NSDictionary, TSDFreehandDrawingToolkitUIState, TSKSelectionPath, NSNumber, TSKAnnotationAuthor;

@interface TPUIState : NSObject <NSCopying, TSAUIState> {
    double _presentationAutoScrollSpeed;
    long long _viewScaleModeiOS;
    BOOL _showsFlowMode;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) BOOL sectionTemplateDrawablesSelectable;
@property (copy, nonatomic) NSDictionary *chartUIState;
@property (nonatomic) BOOL rulersVisible;
@property (nonatomic) BOOL layoutBordersVisible;
@property (nonatomic) BOOL wordCountHUDVisible;
@property (nonatomic) int wordCountHUDType;
@property (nonatomic) struct CGPoint { double x; double y; } wordCountHUDPosition;
@property (nonatomic) BOOL showsComments;
@property (readonly, nonatomic) BOOL hasShowsCTMarkup;
@property (nonatomic) BOOL showsCTMarkup;
@property (readonly, nonatomic) BOOL hasShowsCTDeletions;
@property (nonatomic) BOOL showsCTDeletions;
@property (nonatomic) BOOL changeTrackingPaused;
@property (nonatomic) BOOL showsFlowMode;
@property (copy, nonatomic) NSNumber *flowModeFontScale;
@property (nonatomic) BOOL showsPageNavigator;
@property (nonatomic) BOOL showsTOCNavigator;
@property (nonatomic) BOOL pencilAnnotationsHidden;
@property (nonatomic) BOOL showsActivityStream;
@property (nonatomic) BOOL shouldShowCommentSidebar;
@property (nonatomic) long long viewScaleMode;
@property (nonatomic) long long pageViewState;
@property (nonatomic) double viewScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } windowFrame;
@property (copy, nonatomic) NSString *selectedInspectorSwitchSegmentIdentifier;
@property (nonatomic) BOOL inspectorHidden;
@property (nonatomic) BOOL showUserDefinedGuides;
@property (copy, nonatomic) NSString *authorForFilteringName;
@property (retain, nonatomic) TSKAnnotationAuthor *authorForFiltering;
@property (retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
@property (retain, nonatomic) TSKPencilAnnotationUIState *pencilAnnotationUIState;
@property (nonatomic) BOOL showUserDefinedPageTemplateGuides;
@property (nonatomic) double tocOrPageNavWidth;
@property (nonatomic) double activityOrAnnotationWidth;
@property (nonatomic) BOOL editingDisabled;
@property (copy, nonatomic) TSKSelectionPath *selectionPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1 context:(id)a2;
- (id)UIStateForChart:(id)a0;
- (id)archivedUIStateInContext:(id)a0;
- (void)resetForInitialViewing;
- (void)setUIState:(id)a0 forChart:(id)a1;
- (BOOL)isEqualToUIState:(id)a0;

@end
