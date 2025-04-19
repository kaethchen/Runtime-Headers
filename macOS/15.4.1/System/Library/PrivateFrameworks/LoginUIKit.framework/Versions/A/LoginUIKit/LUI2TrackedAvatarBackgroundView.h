@interface LUI2TrackedAvatarBackgroundView : LUI2AvatarBackgroundView

- (void)updateTrackingAreas;
- (void)startTracking:(id)a0 options:(unsigned long long)a1 userInfo:(id)a2;
- (void)clearTracking;
- (BOOL)isTracking:(id)a0;
- (void)stopTracking:(id)a0;

@end
