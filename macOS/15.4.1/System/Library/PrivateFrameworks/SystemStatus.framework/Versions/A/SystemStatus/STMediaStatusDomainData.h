@class NSArray, STListData, NSString;

@interface STMediaStatusDomainData : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STListData *microphoneAttributionListData;
@property (readonly, copy, nonatomic) STListData *mutedMicrophoneRecordingAttributionListData;
@property (readonly, copy, nonatomic) STListData *systemAudioRecordingAttributionListData;
@property (readonly, copy, nonatomic) STListData *cameraAttributionListData;
@property (readonly, copy, nonatomic) STListData *screenCaptureAttributionListData;
@property (readonly, copy, nonatomic) NSArray *cameraAttributions;
@property (readonly, copy, nonatomic) NSArray *microphoneAttributions;
@property (readonly, copy, nonatomic) NSArray *screenCaptureAttributions;
@property (readonly, copy, nonatomic) NSArray *mutedMicrophoneRecordingAttributions;
@property (readonly, copy, nonatomic) NSArray *systemAudioRecordingAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)microphoneRecordingAttributions;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)mutedAudioRecordingAttributions;
- (id)_initWithMicrophoneAttributionListData:(id)a0 mutedMicrophoneRecordingAttributionListData:(id)a1 systemAudioRecordingAttributionListData:(id)a2 cameraAttributionListData:(id)a3 screenCaptureAttributionListData:(id)a4;
- (id)audioRecordingAttributionList;
- (id)audioRecordingAttributions;
- (id)cameraCaptureAttributionList;
- (id)cameraCaptureAttributions;
- (id)camerasInUseMatchingAttribution:(id)a0;
- (id)dataByApplyingDiff:(id)a0;
- (id)diffFromData:(id)a0;
- (id)initWithMicrophoneAttributionListData:(id)a0 mutedMicrophoneRecordingAttributionListData:(id)a1 systemAudioRecordingAttributionListData:(id)a2 cameraAttributionListData:(id)a3 screenCaptureAttributionListData:(id)a4;
- (id)mutedAudioRecordingAttributionList;

@end
