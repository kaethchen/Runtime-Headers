@class NSString, NSSet, NSDictionary;
@protocol NSCopying;

@interface AWAttentionAwarenessConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSSet *_attentionLostTimeouts;
    NSDictionary *_attentionLostTimeoutDictionary;
    BOOL _samplingDelayExplicitlySet;
    BOOL _attentionLostEventMaskExplicitlySet;
    unsigned long long _tagIndex;
    NSSet *_allowedHIDEventsForRemoteEvent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id<NSCopying> tag;
@property (nonatomic) unsigned long long notificationMask;
@property (nonatomic) unsigned long long eventMask;
@property (nonatomic) unsigned long long attentionLostEventMask;
@property (nonatomic) double samplingInterval;
@property (nonatomic) double samplingDelay;
@property (nonatomic) BOOL sampleWhileAbsent;
@property (nonatomic) BOOL retroactiveTimeoutMode;
@property (nonatomic) BOOL continuousFaceDetectMode;
@property (copy, nonatomic) NSSet *digitizerDisplayUUIDs;
@property (copy, nonatomic) NSSet *keyboardDisplayUUIDs;
@property (copy, nonatomic) NSSet *buttonDisplayUUIDs;
@property (nonatomic) BOOL activateEyeRelief;
@property (nonatomic) BOOL activateAttentionDetection;
@property (nonatomic) BOOL activateMotionDetect;
@property (nonatomic) BOOL unityStream;
@property (nonatomic) BOOL pollingFilter;
@property (copy, nonatomic) NSSet *attentionLostTimeouts;
@property (copy, nonatomic) NSDictionary *attentionLostTimeoutDictionary;
@property (nonatomic) BOOL nonSampledAttentionLostTimeoutEnable;
@property (nonatomic) double nonSampledAttentionLostTimeout;

+ (void)initialize;
+ (void)cancelNotification:(struct AWNotification_s { } *)a0;
+ (unsigned long long)supportedEvents;
+ (struct AWNotification_s { } *)notifySupportedEventsChangedWithQueue:(id)a0 block:(id /* block */)a1;
+ (id)supportedEventsString;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)validateWithError:(id *)a0;
- (id)allowedHIDEventsForRemoteEvent;
- (id)attentionLostTimeouts;
- (void)setAllowedHIDEventsForRemoteEvent:(id)a0;
- (void)setAttentionLostTimeout:(double)a0;
- (void)setAttentionLostTimeouts:(id)a0;
- (unsigned long long)tagIndex;

@end
