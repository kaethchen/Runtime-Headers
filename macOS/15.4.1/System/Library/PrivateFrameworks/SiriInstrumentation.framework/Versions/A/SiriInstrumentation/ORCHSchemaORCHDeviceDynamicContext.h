@class NSData;

@interface ORCHSchemaORCHDeviceDynamicContext : SISchemaInstrumentationMessage {
    struct { unsigned char thermalState : 1; unsigned char motionActivity : 1; unsigned char timeSinceAssistantDaemonStartedInMs : 1; unsigned char headGesturesSupported : 1; unsigned char headGesturesEnabled : 1; unsigned char acceptProceedGesture : 1; unsigned char declineDismissGesture : 1; unsigned char isWifiEnabled : 1; unsigned char bluetoothState : 1; unsigned char flashlightLevel : 1; unsigned char isChatGPTEnabled : 1; } _has;
}

@property (nonatomic) int thermalState;
@property (nonatomic) BOOL hasThermalState;
@property (nonatomic) int motionActivity;
@property (nonatomic) BOOL hasMotionActivity;
@property (nonatomic) unsigned long long timeSinceAssistantDaemonStartedInMs;
@property (nonatomic) BOOL hasTimeSinceAssistantDaemonStartedInMs;
@property (nonatomic) BOOL headGesturesSupported;
@property (nonatomic) BOOL hasHeadGesturesSupported;
@property (nonatomic) BOOL headGesturesEnabled;
@property (nonatomic) BOOL hasHeadGesturesEnabled;
@property (nonatomic) int acceptProceedGesture;
@property (nonatomic) BOOL hasAcceptProceedGesture;
@property (nonatomic) int declineDismissGesture;
@property (nonatomic) BOOL hasDeclineDismissGesture;
@property (nonatomic) BOOL isWifiEnabled;
@property (nonatomic) BOOL hasIsWifiEnabled;
@property (nonatomic) int bluetoothState;
@property (nonatomic) BOOL hasBluetoothState;
@property (nonatomic) int flashlightLevel;
@property (nonatomic) BOOL hasFlashlightLevel;
@property (nonatomic) BOOL isChatGPTEnabled;
@property (nonatomic) BOOL hasIsChatGPTEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAcceptProceedGesture;
- (void)deleteBluetoothState;
- (void)deleteDeclineDismissGesture;
- (void)deleteFlashlightLevel;
- (void)deleteHeadGesturesEnabled;
- (void)deleteHeadGesturesSupported;
- (void)deleteIsChatGPTEnabled;
- (void)deleteIsWifiEnabled;
- (void)deleteMotionActivity;
- (void)deleteThermalState;
- (void)deleteTimeSinceAssistantDaemonStartedInMs;
- (id)suppressMessageUnderConditions;

@end
