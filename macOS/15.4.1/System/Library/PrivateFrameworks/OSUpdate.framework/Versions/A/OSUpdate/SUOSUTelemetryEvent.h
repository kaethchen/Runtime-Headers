@interface SUOSUTelemetryEvent : SUTelemetryEvent

- (void)appendCredentialHarvestingInfoWithSharedPrefs:(id)a0 stashState:(long long)a1 toDict:(id)a2;
- (void)appendTelemetryFromSUOSUProduct:(id)a0 toDict:(id)a1;

@end
