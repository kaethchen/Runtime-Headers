@class NSObject;
@protocol OS_dispatch_group;

@interface TVISTransaction : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *tracker;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)cancel;
- (void)end;
- (void)begin;
- (id)initWithTracker:(id)a0;
- (void)_endTransaction;
- (void)_enterCooldown;
- (void)_handleBegin;
- (void)_handleCancel;

@end
