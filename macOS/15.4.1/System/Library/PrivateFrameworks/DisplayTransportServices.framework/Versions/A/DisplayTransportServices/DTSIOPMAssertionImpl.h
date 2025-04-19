@class NSString;

@interface DTSIOPMAssertionImpl : NSObject <DTSIOPMAssertion>

@property (readonly, nonatomic) unsigned int assertionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithAssertion:(unsigned int)a0;

@end
