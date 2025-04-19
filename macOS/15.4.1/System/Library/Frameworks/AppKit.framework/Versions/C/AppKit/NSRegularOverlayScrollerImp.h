@interface NSRegularOverlayScrollerImp : NSOverlayScrollerImp

+ (double)scrollerWidth;

- (double)_contractedTrackWidth;
- (double)_expandedTrackWidth;
- (unsigned long long)controlSize;
- (double)knobInset;
- (double)knobMinLength;
- (double)trackEndInset;
- (double)trackOverlapEndInset;
- (double)trackSideInset;

@end
