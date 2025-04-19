@class NSString, VSOptional;

@interface VSWLKAppInstallationOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSString *appAdamID;
@property (retain, nonatomic) id installable;

- (void).cxx_destruct;
- (void)executionDidBegin;

@end
