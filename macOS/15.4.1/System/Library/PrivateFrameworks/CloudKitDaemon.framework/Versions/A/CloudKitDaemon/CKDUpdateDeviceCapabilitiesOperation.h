@class CKDPResponseOperationResult, NSMutableDictionary;

@interface CKDUpdateDeviceCapabilitiesOperation : CKDOperation

@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL needsSynchronizeSigningIdentities;
@property (nonatomic) BOOL didSynchronizeSigningIdentities;
@property (retain, nonatomic) CKDPResponseOperationResult *deviceCapabiltiesUpdateResult;
@property (retain, nonatomic) NSMutableDictionary *zoneUsageResults;
@property (retain, nonatomic) NSMutableDictionary *shareUsageResults;
@property (copy, nonatomic) id /* block */ updateDeviceCapabilitiesCompletionBlock;
@property (copy, nonatomic) id /* block */ perZoneUsageCompletionBlock;
@property (copy, nonatomic) id /* block */ perShareUsageCompletionBlock;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (id)activityCreate;
- (id)payloadDescription;
- (id)errorForResult:(id)a0 fallbackDescription:(id)a1;
- (void)handleRequestCompleted:(id)a0;
- (void)invokeCompletionHandlers;
- (id)lastSentCapabilities;
- (BOOL)makeStateTransition;
- (void)sendSupportedCapabilitiesToServer;
- (id)shareUsages;
- (id)supportedCapabilities;
- (void)synchronizeSigningIdentities;
- (id)zoneUsages;

@end
