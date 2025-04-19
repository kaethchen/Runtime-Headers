@class NSString, NSSet;
@protocol AMSPushHandlerDelegate;

@interface AMSPushConfiguration : NSObject

@property (weak) id<AMSPushHandlerDelegate> delegate;
@property (retain) NSString *engagementPushTopic;
@property (retain) NSString *userNotificationExtensionId;
@property (retain) NSSet *enabledActionTypes;

- (void).cxx_destruct;
- (id)initWithEnabledActionTypes:(id)a0;

@end
