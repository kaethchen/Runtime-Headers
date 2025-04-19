@interface PFProcessAssertionDeniedMetric : PFProcessAssertionMetric {
    long long _backgroundRefreshStatus;
}

- (id)name;
- (id)createPayload;
- (id)initWithAssertionLabel:(id)a0 backgroundRefreshStatus:(long long)a1;

@end
