@class NSString;
@protocol AKAppleIDProximityAuthenticationContextDelegate;

@interface AKAppleIDProximityAuthenticationContext : AKAppleIDAuthenticationInAppContext

@property (nonatomic) id /* block */ proximityAIDAHandler;
@property (weak, nonatomic) id<AKAppleIDProximityAuthenticationContextDelegate> proxDelegate;
@property (copy, nonatomic) NSString *secondaryButtonTitle;

- (id)init;
- (void).cxx_destruct;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)a0;

@end
