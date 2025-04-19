@class SCContentFilter, NSString, SCCompositeConfiguration, SCContentSharingPickerConfiguration, SCContentSharingPickerInfo;

@interface SCStreamInfo : NSObject

@property (retain, nonatomic) SCContentSharingPickerInfo *picker;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (retain, nonatomic) NSString *streamID;
@property (retain, nonatomic) NSString *mainAppBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) SCContentSharingPickerConfiguration *pickerConfiguration;
@property (retain, nonatomic) NSString *streamName;
@property (nonatomic) long long filterType;
@property (nonatomic) unsigned int captureID;
@property (nonatomic) int pid;
@property (retain, nonatomic) SCContentFilter *streamContentFilter;
@property (retain, nonatomic) SCCompositeConfiguration *streamCompositeConfig;
@property (nonatomic) BOOL canAdd;
@property (nonatomic) BOOL canRemove;
@property (nonatomic) BOOL canReplace;
@property (nonatomic) BOOL canAddApplication;
@property (nonatomic) BOOL canRemoveApplication;
@property (nonatomic) BOOL canReplaceApplication;
@property (nonatomic) double previewAspectRatio;
@property (nonatomic) BOOL isRecordingOnly;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithConfiguration:(id)a0 contentFilter:(id)a1;
- (BOOL)isEqualToStreamInfo:(id)a0;

@end
