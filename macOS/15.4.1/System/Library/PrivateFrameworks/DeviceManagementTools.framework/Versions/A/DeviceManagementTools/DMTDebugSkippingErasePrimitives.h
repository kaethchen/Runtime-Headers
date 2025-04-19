@class NSString;
@protocol DMTErasePrimitives;

@interface DMTDebugSkippingErasePrimitives : NSObject <DMTErasePrimitives>

@property (readonly, nonatomic) id<DMTErasePrimitives> underlyingErasePrimitives;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithUnderlyingPrimitives:(id)a0;
- (void)performEraseWithCompletion:(id /* block */)a0;

@end
