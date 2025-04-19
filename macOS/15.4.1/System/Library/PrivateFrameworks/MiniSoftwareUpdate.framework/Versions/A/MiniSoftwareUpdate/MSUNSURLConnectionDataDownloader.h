@interface MSUNSURLConnectionDataDownloader : MSUDataDownloader

- (void)sendAsynchronousRequest:(id)a0 completion:(id /* block */)a1;
- (id)sendSynchronousRequest:(id)a0 response:(id *)a1 error:(id *)a2;

@end
