@class NSString;

@interface BRCUserActionsNavigator : NSObject <BRCUserNavigationActions>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultNavigator;

- (void)openShareURLInWebBrowser:(id)a0 withReason:(id)a1;

@end
