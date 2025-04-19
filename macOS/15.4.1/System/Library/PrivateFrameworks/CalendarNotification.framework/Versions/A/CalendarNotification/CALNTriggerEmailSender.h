@class NSString;

@interface CALNTriggerEmailSender : NSObject <CALNEmailSender>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)sendEmailTo:(id)a0 subject:(id)a1 body:(id)a2 callback:(id /* block */)a3;

@end
