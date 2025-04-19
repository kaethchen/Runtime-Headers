@class NSError, NSString;

@interface VSAMSBagLoadOperation : VSAsyncOperation

@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *bagKey;

- (void).cxx_destruct;
- (void)executionDidBegin;

@end
