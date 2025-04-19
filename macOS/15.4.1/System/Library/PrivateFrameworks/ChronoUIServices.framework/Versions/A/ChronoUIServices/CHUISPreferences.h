@class NSString, NSUserDefaults;

@interface CHUISPreferences : NSObject {
    NSUserDefaults *_defaults;
}

@property (readonly, nonatomic) BOOL enableMemoryStressTestingWithGaspar;
@property (readonly, nonatomic) BOOL debugViewLabels;
@property (readonly, nonatomic) BOOL debugSnapshotViewColoring;
@property (readonly, nonatomic) BOOL debugPrefersStaticSnapshots;
@property (readonly, nonatomic) NSString *widgetRenderer;
@property (readonly, nonatomic) BOOL userWantsWidgetDataWhenPasscodeLocked;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
