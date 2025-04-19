@interface _NSURLSessionBackgroundTaskOverrides : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property int _allowsCellularAccess;
@property int _allowsExpensiveNetworkAccess;
@property int _allowsConstrainedNetworkAccess;
@property int _requiresPowerPluggedIn;
@property BOOL allowsCellularAccess;
@property BOOL allowsExpensiveNetworkAccess;
@property BOOL allowsConstrainedNetworkAccess;
@property BOOL requiresPowerPluggedIn;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
