@class INIntent, NSString, NSData, ATXMemoryPressureMonitor, ATXHomeScreenPage;

@interface ATXHomeScreenWidgetIdentifiable : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXMemoryPressureObserver> {
    NSData *_intentProtoData;
    INIntent *_intent;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double score;
@property (copy, nonatomic) NSString *predictionSource;
@property (nonatomic) BOOL requiresAppLaunch;
@property (weak, nonatomic) ATXHomeScreenPage *page;
@property (copy, nonatomic) NSString *extensionBundleId;
@property (copy, nonatomic) NSString *widgetKind;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) INIntent *intent;
@property (copy, nonatomic) NSString *widgetUniqueId;
@property (nonatomic, getter=isSuggestedWidget) BOOL suggestedWidget;
@property (nonatomic, getter=isOnboardingWidget) BOOL onboardingWidget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initFromDictionaryRepresentation:(id)a0;
- (id)compactDescription;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)_dictionaryRepresentationIncludingFullIntent:(BOOL)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void)handleMemoryPressure;
- (id)initWithMemoryPressureMonitor:(id)a0;
- (BOOL)isSameWidgetAsWidgetBundleId:(id)a0 widgetKind:(id)a1;

@end
