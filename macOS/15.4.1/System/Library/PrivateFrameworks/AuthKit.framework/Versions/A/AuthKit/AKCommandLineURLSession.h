@interface AKCommandLineURLSession : AKURLSession

+ (id)sharedServerUIURLSession;

- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;

@end
