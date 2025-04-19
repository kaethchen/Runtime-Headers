@class CSRestrictionManager, CSContextStore, CSRestrictionDataProvider, NSObject;
@protocol OS_dispatch_queue;

@interface CSDaemon : NSObject

@property (nonatomic) BOOL runInternalOnly;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mainQueue;
@property (retain, nonatomic) CSRestrictionDataProvider *restrictionDataProvider;
@property (retain, nonatomic) CSRestrictionManager *restrictionsManager;
@property (retain, nonatomic) CSContextStore *contextStore;

+ (id)run;
+ (id)_sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)_start;
- (BOOL)_shouldRunSafeguards;
- (void)updateContextForIdentifier:(id)a0 withState:(id)a1;
- (void)updateContextForIdentifier:(id)a0 withState:(id)a1 withRestrictions:(id)a2;

@end
