@class NSDictionary;

@interface AVUnreachableAssetInspectorLoader : AVAssetInspectorLoader {
    int _figError;
    NSDictionary *_figErrorUserInfo;
    BOOL _statusOfValueForKeyReturnsLoaded;
}

- (void)dealloc;
- (Class)_classForTrackInspectors;
- (id)initForUnitTests;
- (id)initWithFigError:(int)a0 userInfo:(id)a1;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;

@end
