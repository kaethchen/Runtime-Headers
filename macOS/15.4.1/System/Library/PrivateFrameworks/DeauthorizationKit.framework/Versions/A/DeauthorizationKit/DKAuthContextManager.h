@class NSData, LAContext;

@interface DKAuthContextManager : NSObject

@property (retain) LAContext *localAuthenticationContext;
@property (readonly) NSData *externalizedData;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)evaluateContextWithUserID:(id)a0 password:(id)a1 mdmInitiated:(BOOL)a2;
- (BOOL)evaluateContextWithUserID:(id)a0 password:(id)a1 mdmInitiated:(BOOL)a2 bootstrapTokenString:(id)a3;
- (BOOL)stashWithUserID:(id)a0 data:(id)a1;
- (BOOL)stashWithUserID:(id)a0 password:(id)a1;
- (BOOL)stashWithUserID:(id)a0 password:(id)a1 mdmInitiated:(BOOL)a2;

@end
