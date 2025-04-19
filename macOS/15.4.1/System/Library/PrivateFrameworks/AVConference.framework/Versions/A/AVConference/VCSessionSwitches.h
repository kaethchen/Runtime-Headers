@class NSString;

@interface VCSessionSwitches : NSObject {
    NSString *_conversationID;
}

@property (readonly, nonatomic) unsigned long long switches;

+ (id)featureFlagAndDefaultNameForFeature:(unsigned long long)a0;
+ (float)generateRandomNumberWithConversationID:(id)a0 featureString:(id)a1;

- (void)dealloc;
- (BOOL)isFeatureEnabled:(unsigned long long)a0;
- (id)initWithConversationID:(id)a0;
- (void)setFeature:(unsigned long long)a0 isEnabled:(BOOL)a1;
- (BOOL)trialEnablementWithClient:(id)a0 Context:(struct { id x0; id x1; id x2; id x3; unsigned long long x4; } *)a1 normalizedRandom:(double)a2;

@end
