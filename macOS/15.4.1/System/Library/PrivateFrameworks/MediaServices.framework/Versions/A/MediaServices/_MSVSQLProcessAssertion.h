@class NSString;

@interface _MSVSQLProcessAssertion : NSObject <_MSVSQLAssertion> {
    NSString *_name;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;

@end
