@class NSBundle;

@interface ATXClientModelPredictionReasons : NSObject {
    NSBundle *_bundle;
}

+ (id)clientModelPredictionReasonsBundlePath;

- (id)init;
- (void).cxx_destruct;
- (id)localizedStringForKey:(id)a0;
- (id)actionAnchorReasonForAnchorType:(id)a0;
- (id)actionBehavioralReason;
- (id)actionHeuristicReasonForHeuristicName:(id)a0;
- (id)appAnchorReasonForAnchorType:(id)a0;
- (id)appBehavioralReason;
- (id)appHeroAppReason;
- (id)appInstalledAppClipReason;
- (id)appLocationBasedAppClipReason;
- (id)appMagicalMomentReasonForAnchorType:(long long)a0;

@end
