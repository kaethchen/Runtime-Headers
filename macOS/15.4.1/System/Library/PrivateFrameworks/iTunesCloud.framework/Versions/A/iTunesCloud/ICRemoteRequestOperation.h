@protocol NSSecureCoding;

@interface ICRemoteRequestOperation : ICRequestOperation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=_isShadowOperationForRemoteExecution, setter=_setShadowOperationForRemoteExecution:) BOOL _shadowOperationForRemoteExecution;
@property (retain, nonatomic) id<NSSecureCoding> response;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_execute;

@end
