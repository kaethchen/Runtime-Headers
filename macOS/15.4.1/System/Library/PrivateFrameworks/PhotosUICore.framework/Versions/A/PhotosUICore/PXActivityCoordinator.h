@class NSString, NSMutableArray;

@interface PXActivityCoordinator : NSObject {
    NSMutableArray *_records;
    NSString *_activityName;
}

+ (id)coordinatorForActivity:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_update;
- (void)unregisterItem:(id)a0;
- (id)initWithActivityName:(id)a0;
- (void)registerItem:(id)a0;

@end
