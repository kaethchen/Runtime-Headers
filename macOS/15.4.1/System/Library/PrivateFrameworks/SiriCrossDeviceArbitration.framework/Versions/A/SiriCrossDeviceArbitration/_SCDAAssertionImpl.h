@class SCDAAssertionContext, NSUUID, NSString, SCDATwoArgumentSafetyBlock;

@interface _SCDAAssertionImpl : NSObject <SCDAAssertion> {
    SCDATwoArgumentSafetyBlock *_relinquishmentHandler;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) SCDAAssertionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
