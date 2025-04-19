@class NSString, NSMutableDictionary;

@interface FlowOriginLedger : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableDictionary *delegates;
@property (retain, nonatomic) NSMutableDictionary *appExtensions;
@property (retain, nonatomic) NSMutableDictionary *currentFlows;
@property (retain, nonatomic) NSMutableDictionary *activityBitmaps;
@property (nonatomic) double lastUsed;
@property (readonly, nonatomic) double durationSinceLastUse;

+ (id)getStatsString;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addActivityBitmapForSnapshot:(id)a0 interface:(unsigned char)a1;

@end
