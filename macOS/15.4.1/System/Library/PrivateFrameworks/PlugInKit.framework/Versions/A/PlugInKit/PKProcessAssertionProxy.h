@class NSString, BKSProcessAssertion;

@interface PKProcessAssertionProxy : NSObject <PKProcessAssertionProxy>

@property (readonly) BKSProcessAssertion *_bksObject;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
