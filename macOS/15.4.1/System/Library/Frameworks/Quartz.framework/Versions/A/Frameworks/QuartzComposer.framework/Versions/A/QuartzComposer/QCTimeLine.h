@class GFList;

@interface QCTimeLine : QCPatch {
    GFList *_timeLines;
    BOOL _curveHullsEnabled;
    BOOL _legendHidden;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)deselectAll;
- (void)removeTimeLine:(long long)a0;
- (void)setSerializedValue:(id)a0 forStateKey:(id)a1;
- (id)_copyTimeLines;
- (id)_createOutputPortForTimeLineIndex:(long long)a0;
- (BOOL)timeLineActive:(long long)a0;
- (id)activeTimeLineIndices;
- (long long)addKeyFrameAtTime:(double)a0 value:(double)a1 toTimeLine:(long long)a2 preserveCurve:(BOOL)a3;
- (long long)baseKeyFrameIndexAtTime:(double)a0 inTimeLine:(long long)a1;
- (void)cacheKeyFrames;
- (id)colorForTimeLine:(long long)a0;
- (BOOL)controlsFixedForKeyFrame:(long long)a0 inTimeLine:(long long)a1;
- (long long)createTimeLineWithTime:(double)a0 value:(double)a1;
- (BOOL)curveHullsEnabled;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (id)identifierForTimeLine:(long long)a0;
- (id)inactiveTimeLineIndices;
- (BOOL)keyFrameSelected:(long long)a0 inTimeLine:(long long)a1;
- (unsigned long long)keyFramesCountForTimeLine:(long long)a0;
- (BOOL)legendHidden;
- (struct CGPoint { double x0; double x1; })locationOfControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (double)maxTimeForControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (unsigned long long)maxTimeLinesCount;
- (double)maxValueForControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (double)minTimeForControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (unsigned long long)minTimeLinesCount;
- (double)minValueForControlType:(int)a0 keyFrame:(long long)a1 inTimeLine:(long long)a2;
- (long long)offsetControlType:(int)a0 byTime:(double)a1 byValue:(double)a2 keyFrame:(long long)a3 inTimeLine:(long long)a4;
- (BOOL)performAction:(SEL)a0 onSelectedTimeLines:(BOOL)a1 withSelectedKeyFrames:(BOOL)a2 object:(id)a3 context:(void *)a4;
- (void)purgeKeyFrameCaches;
- (void)removeKeyFrame:(long long)a0 fromTimeLine:(long long)a1;
- (id)serializedValueForStateKey:(id)a0;
- (void)setActive:(BOOL)a0 forTimeLine:(long long)a1 extendSelection:(BOOL)a2;
- (void)setColor:(id)a0 forTimeLine:(long long)a1;
- (void)setControlsFixed:(BOOL)a0 forKeyFrame:(long long)a1 inTimeLine:(long long)a2;
- (void)setCurveHullsEnabled:(BOOL)a0;
- (void)setIdentifier:(id)a0 forTimeLine:(long long)a1;
- (void)setLegendHidden:(BOOL)a0;
- (void)setSelected:(BOOL)a0 forKeyFrame:(long long)a1 inTimeLine:(long long)a2 extendSelection:(BOOL)a3;
- (void)setSelected:(BOOL)a0 ifInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setTime:(double)a0 forKeyFrame:(long long)a1 controlType:(int)a2 inTimeLine:(long long)a3;
- (void)setTimeLines:(id)a0;
- (void)setValue:(double)a0 forKeyFrame:(long long)a1 controlType:(int)a2 inTimeLine:(long long)a3;
- (void)setVisibility:(BOOL)a0 forTimeLine:(long long)a1;
- (double)timeForKeyFrame:(long long)a0 controlType:(int)a1 inTimeLine:(long long)a2;
- (id)timeLines;
- (unsigned long long)timeLinesCount;
- (double)valueForKeyFrame:(long long)a0 controlType:(int)a1 inTimeLine:(long long)a2;
- (BOOL)visibilityForTimeLine:(long long)a0;

@end
