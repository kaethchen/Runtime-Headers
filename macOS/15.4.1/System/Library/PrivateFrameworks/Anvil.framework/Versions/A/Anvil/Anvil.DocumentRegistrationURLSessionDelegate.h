@interface Anvil.DocumentRegistrationURLSessionDelegate : NSObject <NSURLSessionDataDelegate> {
    void /* unknown type, empty encoding */ update;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ fileDescriptor;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ fileSize;
}

- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;

@end
