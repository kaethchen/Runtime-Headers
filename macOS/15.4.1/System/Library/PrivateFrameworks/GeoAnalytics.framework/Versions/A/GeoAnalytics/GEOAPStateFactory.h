@class NSString, GEOLogMsgState, NSObject;
@protocol OS_dispatch_queue;

@interface GEOAPStateFactory : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOLogMsgState *_deviceIdentifierState;
    GEOLogMsgState *_deviceIdentifierInternalState;
    GEOLogMsgState *_applicationIdentifierState;
}

@property (retain) NSString *countryCode;

+ (id)sharedFactory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)impressionObject;
- (id)mapsPlaceIds;
- (id)placeCardRap;
- (id)searchResults;
- (id)placeCardReveal;
- (double)_monthResolution:(double)a0;
- (int)_launchActionFromAPLaunchAction:(int)a0;
- (int)_privacyAllowedActionFromActualAction:(int)a0;
- (int)_rapPlaceCardTypeForRawType:(int)a0;
- (id)curatedCollectionRedacted;
- (void)deviceCountryChanged:(id)a0;
- (int)logMsgStateTypeForType:(long long)a0;
- (id)mapUIShown;
- (void)sessionStateForType:(int)a0 callback:(id /* block */)a1;
- (void)sessionStateForType:(int)a0 onQueue:(id)a1 callback:(id /* block */)a2;
- (void)sessionStateForType:(int)a0 sessionAppId:(id)a1 onQueue:(id)a2 callback:(id /* block */)a3;
- (id)stateForType:(long long)a0;

@end
