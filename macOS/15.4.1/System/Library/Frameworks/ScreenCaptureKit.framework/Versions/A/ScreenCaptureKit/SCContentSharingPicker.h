@class NSString, SCContentSharingPickerConfiguration, NSMutableArray, NSNumber;
@protocol SCContentSharingPickerDelegate, SCContentSharingPickerObserver;

@interface SCContentSharingPicker : NSObject <RPScreenCaptureKitContentSharingPickerDelegate>

@property (class, readonly) SCContentSharingPicker *sharedPicker;

@property (retain, nonatomic) NSMutableArray<SCContentSharingPickerObserver> *observers;
@property (nonatomic) unsigned long long excludedPickingModes;
@property (copy, nonatomic) SCContentSharingPickerConfiguration *configuration;
@property (retain, nonatomic) NSNumber *maxStreamCount;
@property (weak, nonatomic) id<SCContentSharingPickerDelegate> delegate;
@property (copy, nonatomic) SCContentSharingPickerConfiguration *defaultConfiguration;
@property (retain, nonatomic) NSNumber *maximumStreamCount;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPicker;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)present;
- (void)presentPickerUsingContentStyle:(long long)a0;
- (void)presentPickerForStream:(id)a0;
- (void)presentPickerForStream:(id)a0 usingContentStyle:(long long)a1;
- (void)contentPickerDidCancelForStream:(id)a0;
- (void)contentPickerDidSelectFilter:(id)a0 forStream:(id)a1;
- (void)presentPickerWithMode:(long long)a0;
- (id)serializePickerInfo;
- (id)serializeStreamConfig:(id)a0;
- (void)setConfiguration:(id)a0 forStream:(id)a1;
- (void)startPickingContentForStream:(id)a0 withFilter:(id)a1;
- (void)startPickingForStream:(id)a0;
- (void)startPickingUsingContentStyle:(long long)a0;
- (void)startPickingWithContentStyle:(long long)a0;

@end
