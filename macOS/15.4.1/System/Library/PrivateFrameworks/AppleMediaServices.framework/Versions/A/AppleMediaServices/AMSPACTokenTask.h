@class NSString, NSData;

@interface AMSPACTokenTask : AMSTask

@property (readonly) NSString *simLabelID;
@property (retain) NSData *signingData;

- (void).cxx_destruct;
- (id)perform;
- (id)initWithSimLabelID:(id)a0;

@end
