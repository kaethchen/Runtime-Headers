@interface FileProviderDaemon.DummyEnumeratorObserver : NSObject <FPXEnumeratorObserver>

- (id)init;
- (void)didUpdateItem:(id)a0;
- (void)enumerationResultsDidChange;

@end
