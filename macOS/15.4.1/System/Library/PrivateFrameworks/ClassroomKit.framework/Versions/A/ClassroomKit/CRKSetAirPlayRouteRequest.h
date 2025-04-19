@class NSString;

@interface CRKSetAirPlayRouteRequest : CATTaskRequest

@property (copy, nonatomic) NSString *routeUID;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) BOOL suppressPasscodePrompt;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
