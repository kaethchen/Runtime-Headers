@class NSExtension;
@protocol RPStreamingActivityDelegate;

@interface RPStreamingActivity : NSMenuItem

@property (readonly, nonatomic) NSExtension *applicationExtension;
@property (retain, nonatomic) id<RPStreamingActivityDelegate> delegate;

- (void).cxx_destruct;
- (id)activityType;
- (void)performAction:(id)a0;
- (id)activityTitle;
- (id)activityImage;
- (id)initWithApplicationExtension:(id)a0;

@end
