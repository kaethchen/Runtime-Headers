@class NSString;

@interface NFVehicleReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *keyIdentifier;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getRKEFunctionsInProgress;
- (id)getStatusForRKEFunction:(id)a0;
- (id)getSupportedRKEFunctions;
- (BOOL)isRKEFunctionInProgress:(id)a0;
- (BOOL)isRKEFunctionSupported:(id)a0;

@end
