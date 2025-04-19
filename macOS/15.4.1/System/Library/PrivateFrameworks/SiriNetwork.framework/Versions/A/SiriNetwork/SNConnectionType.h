@class SNConnectionTypeInternal;

@interface SNConnectionType : NSObject

@property (retain, nonatomic) SNConnectionTypeInternal *underlyingConnectionType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTechnology:(long long)a0;
- (long long)technology;
- (unsigned long long)aggregatorConnectionType;
- (BOOL)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (BOOL)isEdge;
- (BOOL)isWWAN;
- (id)technologyDescription;

@end
