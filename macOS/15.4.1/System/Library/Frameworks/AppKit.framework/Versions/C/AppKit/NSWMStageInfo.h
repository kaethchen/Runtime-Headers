@class NSDictionary;

@interface NSWMStageInfo : NSObject {
    NSDictionary *_latestSpaceIDToStage;
    NSDictionary *_pendingSpaceIDToStage;
    unsigned long long _pendingDisplayChangeSeed;
    unsigned long long _latestStyle;
}

@property (class, readonly) NSWMStageInfo *sharedInfo;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForEdgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0 screenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })safeAreaForSpaceID:(unsigned long long)a0 screenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)performStageInvalidationReactions:(unsigned long long)a0;
- (unsigned long long)reactionsFromSettingPendingStages;
- (unsigned long long)reactionsFromSettingStages:(id)a0 displayChangeSeed:(unsigned long long)a1;
- (void)setStages:(id)a0 displayChangeSeed:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stageFrameForSpaceID:(unsigned long long)a0 screenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned long long)stageStyleForSpaceID:(unsigned long long)a0;
- (unsigned long long)systemStageStyle;

@end
