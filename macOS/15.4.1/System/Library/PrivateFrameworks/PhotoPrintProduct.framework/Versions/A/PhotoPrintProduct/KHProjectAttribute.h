@interface KHProjectAttribute : KHAttribute {
    long long _projectId;
}

- (id)clone;
- (long long)projectId;
- (void)setProjectId:(long long)a0;
- (void)cacheProjectId:(long long)a0;
- (id)cloneInDatabase:(id)a0;
- (BOOL)isProjectModel;

@end
