@class NSUUID, NSObject;
@protocol OS_nw_activity;

@interface FCNetworkActivity : NSObject {
    NSObject<OS_nw_activity> *_activity;
}

@property (nonatomic) unsigned int domain;
@property (nonatomic) unsigned int label;
@property (readonly, nonatomic) NSUUID *token;

+ (id)activityWithLabel:(unsigned int)a0;

- (void).cxx_destruct;
- (id)initWithLabel:(unsigned int)a0;
- (void)startActivity;
- (void)attachActivityToTask:(id)a0;
- (void)completeActivityWithSuccess:(BOOL)a0;
- (void)setParentActivity:(id)a0;

@end
