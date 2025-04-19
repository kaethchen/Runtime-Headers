@interface CSMediaAnalysisFilesQuery : CSExternalAnalysisFilesQuery

- (id)initWithUTTypes:(id)a0 analysisVersions:(id)a1 attributes:(id)a2 maxCount:(long long)a3;
- (id)initWithUTTypes:(id)a0 analysisVersions:(id)a1 attributes:(id)a2 scopes:(id)a3 maxCount:(long long)a4;
- (id)initWithUTTypes:(id)a0 analysisVersions:(id)a1 nextAttemptDate:(id)a2 attributes:(id)a3 scopes:(id)a4 maxCount:(long long)a5;

@end
