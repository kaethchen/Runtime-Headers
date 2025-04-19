@class NSDate;

@interface HMDUserType3Focus : HMFObject

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSDate *updatedTime;
@property (readonly, nonatomic, getter=isUserActionTriggered) BOOL userActionTriggered;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithEnabled:(BOOL)a0 updatedTime:(id)a1 userActionTriggered:(BOOL)a2;

@end
