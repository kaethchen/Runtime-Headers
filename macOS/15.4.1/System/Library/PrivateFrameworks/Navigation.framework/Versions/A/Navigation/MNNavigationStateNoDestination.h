@interface MNNavigationStateNoDestination : MNNavigationState

- (unsigned long long)type;
- (unsigned long long)desiredLocationProviderType;
- (void)postEnterState;
- (void)setRoutesForPreview:(id)a0 selectedRouteIndex:(unsigned long long)a1;
- (void)startNavigationWithDetails:(id)a0 activeBlock:(id /* block */)a1;

@end
