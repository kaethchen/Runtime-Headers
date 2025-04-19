@interface UINSGameModuleScrollDrag : UINSGameModuleDigitizer {
    BOOL _scrollTrackingInProgress;
    BOOL _scrollTranslationInProgress;
    struct CGPoint { double x; double y; } _scrollInitialPoint;
    struct CGPoint { double x; double y; } _scrollCumulativeDelta;
}

+ (id)name;

- (void)scrollWheel:(id)a0;
- (void)applyUserDefaults;

@end
