@class NSString, BMSource, BMStream, NSObject;
@protocol OS_dispatch_queue;

@interface SCUIAnalytics : NSObject

@property (retain, nonatomic) BMStream *biomeSCUIStream;
@property (retain, nonatomic) BMSource *biomeSCUISource;
@property (copy, nonatomic) NSString *clientBundleID;
@property (nonatomic) int ageGroup;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (int)biomeAgeGroup;
- (void)collectUIInteractionEvent:(int)a0 :(int)a1 :(int)a2 :(int)a3 :(int)a4;

@end
