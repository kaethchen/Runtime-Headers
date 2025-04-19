@class NSString, NSDictionary;

@interface IASignalAnalyticsObject : IAXPCObject

@property (retain, nonatomic) NSString *channelName;
@property (retain, nonatomic) NSString *signalName;
@property (retain, nonatomic) NSString *analyticsSessionIdString;
@property (retain, nonatomic) NSDictionary *payload;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithChannel:(id)a0 signal:(id)a1 sessionIdString:(id)a2 payload:(id)a3;
- (id)obtainPayloadValueSafelyForKey:(id)a0 expectedClass:(Class)a1;

@end
