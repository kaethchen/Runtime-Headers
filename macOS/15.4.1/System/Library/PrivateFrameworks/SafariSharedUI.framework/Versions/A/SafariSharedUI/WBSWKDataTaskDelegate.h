@class NSString;

@interface WBSWKDataTaskDelegate : NSObject <_WKDataTaskDelegate>

@property (copy, nonatomic) id /* block */ didReceiveData;
@property (copy, nonatomic) id /* block */ didCompleteWithError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dataTask:(id)a0 didCompleteWithError:(id)a1;
- (void)dataTask:(id)a0 didReceiveData:(id)a1;

@end
