@class NSUUID, NSObject, RCUnfairLock;
@protocol OS_nw_activity;

@interface RCNetworkActivity : NSObject {
    NSObject<OS_nw_activity> *_activity;
}

@property (retain, nonatomic) RCUnfairLock *accessLock;
@property (nonatomic) unsigned int domain;
@property (nonatomic) unsigned int label;
@property (retain, nonatomic) NSUUID *parentToken;

+ (id)activityWithDomain:(unsigned int)a0 label:(unsigned int)a1 parentToken:(id)a2;

- (void).cxx_destruct;
- (void)startActivity;
- (void)attachActivityToTask:(id)a0;
- (void)completeActivityWithSuccess:(BOOL)a0;
- (id)initWithDomain:(unsigned int)a0 label:(unsigned int)a1 parentToken:(id)a2;

@end
