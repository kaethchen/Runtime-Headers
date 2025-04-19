@interface SidebarButtonPulseAnimation : NSAnimation {
    double _currentAlternateStateOpacity;
}

- (void)setCurrentProgress:(float)a0;
- (double)currentAlternateStateOpacity;

@end
