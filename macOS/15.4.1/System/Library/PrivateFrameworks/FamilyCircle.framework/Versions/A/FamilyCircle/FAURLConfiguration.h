@interface FAURLConfiguration : NSObject <FAURLProvider>

- (id)URLForEndpoint:(id)a0;
- (void)URLForEndpoint:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchAAURLConfigurationWithCompletion:(id /* block */)a0;

@end
