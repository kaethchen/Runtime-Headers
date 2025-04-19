@interface SNConnectionTypeInternal : NSObject {
    void /* unknown type, empty encoding */ connectionType;
}

- (id)init;
- (id)init:(long long)a0;
- (unsigned long long)aggregatorConnectionType;
- (BOOL)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (BOOL)isEdge;
- (BOOL)isWWAN;
- (long long)connectionTypeRawValue;
- (id)connectionTypeStringRawValue;

@end
