@interface SiriCoreConnectionType : NSObject {
    long long _technology;
}

- (id)description;
- (id)initWithTechnology:(long long)a0;
- (long long)technology;
- (unsigned long long)aggregatorConnectionType;
- (BOOL)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (BOOL)isEdge;
- (BOOL)isWWAN;

@end
