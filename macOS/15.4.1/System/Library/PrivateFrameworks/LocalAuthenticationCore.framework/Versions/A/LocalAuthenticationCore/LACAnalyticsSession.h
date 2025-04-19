@class LACAnalyticsData, NSString;

@interface LACAnalyticsSession : NSObject

@property (retain, nonatomic) LACAnalyticsData *analyticsData;
@property (readonly, nonatomic) NSString *dialogID;
@property (readonly, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL dirty;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)finish;
- (id)initWithDialogID:(id)a0 bundleID:(id)a1;

@end
