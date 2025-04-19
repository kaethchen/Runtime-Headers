@class NSArray, NSMutableDictionary;

@interface RDCachedData : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_countriesFromLocation;
    NSArray *_countriesFromNearbyCells;
    NSArray *_countriesFromServingCell;
    NSArray *_countriesFromWiFiAPs;
    BOOL _locationLocalEstimateIsInDisputedArea;
    NSArray *_localOnlyEstimates;
    NSArray *_combinedEstimate;
    NSArray *_lastKnownCombinedEstimate;
    NSMutableDictionary *_peerDeviceLocalEstimates;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)loadCache;
+ (id)getCacheDirPath;
+ (void)createCacheAtPath:(id)a0;
+ (void)createCacheDirectoryIfNeeded:(BOOL)a0;
+ (id)getCacheDirPathForUnitTest;
+ (id)getCacheDirPathLegacy;
+ (id)getUserPath:(id)a0;
+ (id)loadCache:(BOOL)a0;
+ (id)loadCacheForUnitTest;
+ (id)sortPreferredOrder:(id)a0;
+ (id)stringsFromRDEstimateArray:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)saveCache:(BOOL)a0;
- (id)getEstimateForPeerDeviceWithID:(id)a0;
- (void)computeLocalCountryCode;
- (id)countryCodesForPriority:(unsigned int)a0;
- (id)getCombinedEstimate;
- (id)getLastKnownCombinedEstimate;
- (id)getLocalOnlyEstimates;
- (id)initWithCountryCodeFromLocation:(id)a0 fromServingCell:(id)a1 fromNearbyCell:(id)a2 fromWiFi:(id)a3 localEstimates:(id)a4 combinedEstimate:(id)a5 lastKnownCombinedEstimate:(id)a6 locationLocalEstimateInDisputedArea:(BOOL)a7 peerEstimates:(id)a8;
- (void)postResultsToEligibilityEngine;
- (void)recompute;
- (void)recompute:(BOOL)a0;
- (void)removeEstimateForPeerDeviceWithID:(id)a0;
- (void)removeEstimateForPeerDeviceWithIDForUnitTest:(id)a0;
- (BOOL)saveCache;
- (BOOL)saveCacheForUnitTest;
- (void)setCountriesFromLocation:(id)a0;
- (void)setCountriesFromLocation:(id)a0 forUnitTest:(BOOL)a1 isDisputed:(BOOL)a2;
- (void)setCountriesFromLocation:(id)a0 isInDisputedArea:(BOOL)a1;
- (void)setCountriesFromLocationForUnitTest:(id)a0 isDisputed:(BOOL)a1;
- (void)setCountriesFromNearbyCells:(id)a0;
- (void)setCountriesFromNearbyCells:(id)a0 forUnitTest:(BOOL)a1;
- (void)setCountriesFromNearbyCellsForUnitTest:(id)a0;
- (void)setCountriesFromServingCell:(id)a0;
- (void)setCountriesFromServingCell:(id)a0 forUnitTest:(BOOL)a1;
- (void)setCountriesFromServingCellForUnitTest:(id)a0;
- (void)setCountriesFromWiFiAPs:(id)a0;
- (void)setCountriesFromWiFiAPs:(id)a0 forUnitTest:(BOOL)a1;
- (void)setCountriesFromWiFiAPsForUnitTest:(id)a0;
- (void)setCountryFromLocation:(id)a0;
- (void)setCountryFromMCC:(id)a0;
- (void)setCountryFromWiFiAPs:(id)a0;
- (void)setEstimate:(id)a0 forPeerDeviceWithID:(id)a1;
- (void)setEstimate:(id)a0 forPeerDeviceWithID:(id)a1 isUnitTest:(BOOL)a2;
- (void)setEstimateForUnitTest:(id)a0 forPeerDeviceWithID:(id)a1;

@end
