@class NSXPCConnection;

@interface CLLocationInternalClient : NSObject {
    NSXPCConnection *_connection;
}

+ (id)sharedServiceClient;

- (id)connection;
- (BOOL)registerCircularInterestZoneWithId:(id)a0 latitude:(double)a1 longitude:(double)a2 radius:(double)a3 serviceMaskOperator:(int)a4 provenanceType:(int)a5 forBundleId:(id)a6 orBundlePath:(id)a7 error:(id *)a8;
- (void)setLocationDefaultForKey:(struct __CFString { } *)a0 value:(void *)a1;
- (unsigned char)setPinnedLocationAuthorization:(unsigned char)a0;
- (void)setPrivateMode:(unsigned char)a0;
- (id)applyArchivedAuthorizationDecisions:(id)a0;
- (BOOL)checkAndExerciseAuthorizationForBundleID:(id)a0 orBundlePath:(id)a1 services:(unsigned long long)a2 error:(id *)a3;
- (void)clearLocationAuthorizationForBundleId:(struct __CFString { } *)a0 orBundlePath:(struct __CFString { } *)a1;
- (unsigned char)clearLocationAuthorizations;
- (struct __CFDictionary { } *)copyActiveClientsUsingLocation;
- (struct __CFDictionary { } *)copyAppsUsingLocation;
- (struct __CFArray { } *)copyGnssBandsInUse;
- (struct __CFDictionary { } *)copyInternalState;
- (unsigned char)copyLastLog;
- (struct __CFString { } *)copyMicroLocationInternalVersion;
- (struct __CFDictionary { } *)copyMonitoredRegionsForBundleIdentifier:(struct __CFString { } *)a0 orBundlePath:(struct __CFString { } *)a1;
- (struct __CFArray { } *)copyTechnologiesInUse;
- (struct __CFDictionary { } *)copyZaxisStats;
- (BOOL)deleteInterestZoneWithId:(id)a0 registeredForBundleId:(id)a1 orBundlePath:(id)a2 error:(id *)a3;
- (unsigned char)displayStatistics;
- (unsigned char)dumpLogs:(struct __CFString { } *)a0;
- (int)getAccessoryPASCDTransmissionState;
- (int)getAccessoryTypeBitSet;
- (id)getArchivedAuthorizationDecisionsWithError:(id *)a0;
- (unsigned char)getAuthorizationPromptMapDisplayEnabled:(char *)a0;
- (unsigned char)getAuthorizationStatus:(int *)a0 forBundleID:(struct __CFString { } *)a1 orBundlePath:(struct __CFString { } *)a2;
- (unsigned char)getAuthorizationStatusForApp:(int *)a0 withAuditToken:(struct { unsigned int x0[8]; })a1;
- (unsigned char)getGestureServiceEnabled:(char *)a0;
- (unsigned char)getGroundAltitudeForBundleID:(struct __CFString { } *)a0 orBundlePath:(struct __CFString { } *)a1 location:(id)a2 groundAltitude:(struct { double x0; double x1; double x2; int x3; } *)a3;
- (unsigned char)getGyroCalibrationDatabaseBiasFit:(struct { int x0; double x1; double x2; float x3; float x4; union { struct { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; } x0; struct { BOOL x0; char x1[282]; } x1; } x5; } *)a0 atTemperature:(float)a1;
- (unsigned char)getIncidentalUseMode:(int *)a0 forBundleID:(struct __CFString { } *)a1 orBundlePath:(struct __CFString { } *)a2;
- (void *)getLocationDefaultForKey:(struct __CFString { } *)a0;
- (unsigned char)getLocationForBundleID:(struct __CFString { } *)a0 orBundlePath:(struct __CFString { } *)a1 dynamicAccuracyReductionEnabled:(unsigned char)a2 allowsAlteredAccessoryLocations:(unsigned char)a3 location:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; } *)a4;
- (unsigned char)getLocationServicesEnabled:(char *)a0;
- (id)getOdometryBatchedLocations;
- (unsigned char)getPinnedLocationAuthorizationState:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0;
- (id)getPipelinedCache;
- (unsigned char)getPrecisionPermission:(char *)a0 forBundleID:(struct __CFString { } *)a1 orBundlePath:(struct __CFString { } *)a2;
- (unsigned char)getPrivateMode;
- (unsigned char)getStatusBarIconEnabled:(BOOL *)a0 forEntityClass:(int)a1;
- (int)getStatusBarIconState;
- (id)getTemporaryAuthorizationStatusForBundleId:(id)a0 orBundlePath:(id)a1 error:(id *)a2;
- (unsigned char)isLocationServicesCapable;
- (double)modifyOrSetAuthorizationTime:(double)a0 forBundleID:(id)a1 orBundlePath:(id)a2;
- (void)notifyPassKitPayment:(id)a0 transaction:(id)a1 info:(id)a2;
- (void)notifyWeatherForecast:(id)a0 airQualityConditions:(id)a1 hourlyForecasts:(id)a2 dailyForecasts:(id)a3 latitude:(double)a4 longitude:(double)a5;
- (unsigned char)performMigration;
- (unsigned char)pingDaemon;
- (BOOL)registerPhenolicInterestZoneWithId:(id)a0 phenolicLocation:(int)a1 serviceMaskOperator:(int)a2 provenanceType:(int)a3 forBundleId:(id)a4 orBundlePath:(id)a5 error:(id *)a6;
- (unsigned char)reportLocationUtilityEvent:(int)a0 atDate:(struct __CFDate { } *)a1;
- (id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)a0;
- (unsigned char)setAuthorizationStatus:(unsigned char)a0 withCorrectiveCompensation:(int)a1 forBundleID:(struct __CFString { } *)a2 orBundlePath:(struct __CFString { } *)a3;
- (void)setGestureServiceEnabled:(unsigned char)a0;
- (void)setLocationServicesEnabled:(unsigned char)a0;
- (void)setMapMatchingRouteHint:(struct { unsigned long long x0; double x1; double x2; double x3; double x4; } *)a0 count:(int)a1 routingType:(int)a2 stepType:(int)a3;
- (BOOL)setRelevance:(BOOL)a0 forInterestZoneWithId:(id)a1 registeredForBundleId:(id)a2 orBundlePath:(id)a3 error:(id *)a4;
- (unsigned char)setStatusBarIconEnabled:(BOOL)a0 forEntityClass:(int)a1;
- (unsigned char)setTemporaryAuthorizationGranted:(unsigned char)a0 forBundleID:(struct __CFString { } *)a1 orBundlePath:(struct __CFString { } *)a2 orAuditToken:(struct { unsigned int x0[8]; })a3 byLocationButton:(unsigned char)a4 voiceInteractionEnabled:(unsigned char)a5;
- (id)setTemporaryAuthorizationStatusForBundleId:(id)a0 orBundlePath:(id)a1 statusData:(id)a2;
- (unsigned char)setTemporaryPreciseAuthorizationGranted:(unsigned char)a0 forBundleID:(struct __CFString { } *)a1 orBundlePath:(struct __CFString { } *)a2;
- (void)setTrackRunHint:(struct { double x0; int x1; int x2; } *)a0;
- (unsigned char)shutdownDaemon;
- (id)synchronousRemoteObject;
- (unsigned char)tearDownLocationAuthPromptForBundleID:(struct __CFString { } *)a0 orBundlePath:(struct __CFString { } *)a1;
- (id)timeZoneAtLocation:(id)a0;
- (id)triggerExpiredAuthorizationPurgeOnClientManager;

@end
