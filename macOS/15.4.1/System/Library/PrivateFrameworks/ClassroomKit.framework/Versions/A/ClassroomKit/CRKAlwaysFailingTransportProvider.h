@class NSString, NSError;

@interface CRKAlwaysFailingTransportProvider : NSObject <CRKTransportProviding> {
    NSError *mError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (void)fetchTransportWithCompletion:(id /* block */)a0;

@end
