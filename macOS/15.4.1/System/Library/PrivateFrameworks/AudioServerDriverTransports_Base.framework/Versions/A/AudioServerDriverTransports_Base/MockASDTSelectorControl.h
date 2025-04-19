@class NSString;

@interface MockASDTSelectorControl : ASDTSelectorControl <ASDTTestingProtocol>

@property (nonatomic) BOOL testingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)testingEnable:(BOOL)a0;

@end
