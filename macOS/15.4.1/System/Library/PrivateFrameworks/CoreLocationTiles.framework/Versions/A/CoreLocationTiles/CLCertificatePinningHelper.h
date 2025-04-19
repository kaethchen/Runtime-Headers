@interface CLCertificatePinningHelper : NSObject

+ (void)initialize;
+ (int)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
+ (id)knownHosts;

@end
