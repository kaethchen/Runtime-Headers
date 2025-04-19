@class NSString, ATXPredictionTimeContext, BMUserFocusInferredMode, BMUserFocusModeComputed, NSDictionary, ATXMicrolocationVisitDuetEvent, ATXPredictionDeviceStateContext, ATXPredictionAmbientLightContext, ATXPredictionUserContext, ATXPredictionLocationMotionContext, ATXBluetoothDuetEvent;

@interface ATXPredictionContext : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding, ATXProactiveSuggestionFeedbackContextProtocol, NSCopying>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXPredictionDeviceStateContext *deviceStateContext;
@property (retain, nonatomic) ATXPredictionTimeContext *timeContext;
@property (retain, nonatomic) ATXPredictionLocationMotionContext *locationMotionContext;
@property (retain, nonatomic) ATXPredictionAmbientLightContext *ambientLightContext;
@property (retain, nonatomic) ATXPredictionUserContext *userContext;
@property (retain, nonatomic) NSDictionary *candidateIdentifiersLaunchAge;
@property (retain, nonatomic) BMUserFocusInferredMode *inferredModeEvent;
@property (retain, nonatomic) BMUserFocusModeComputed *userFocusComputedModeEvent;
@property (retain, nonatomic) NSString *poiCategory;
@property (retain, nonatomic) ATXMicrolocationVisitDuetEvent *microlocationVisitEvent;
@property (retain, nonatomic) ATXBluetoothDuetEvent *bluetoothEvent;
@property (nonatomic) BOOL isOverridden;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)initWithDeviceStateContext:(id)a0 timeContext:(id)a1 locationMotionContext:(id)a2 ambientLightContext:(id)a3 userContext:(id)a4;
- (id)initWithDeviceStateContext:(id)a0 timeContext:(id)a1 locationMotionContext:(id)a2 ambientLightContext:(id)a3 userContext:(id)a4 isOverridden:(BOOL)a5;
- (BOOL)isEqualToATXPredictionContext:(id)a0;
- (void)updateTimeContextWithDate:(id)a0;
- (void)updateWithInjectedContext:(id)a0;

@end
