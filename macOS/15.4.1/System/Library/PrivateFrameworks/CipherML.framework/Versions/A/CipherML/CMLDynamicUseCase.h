@class NSString, CMLNetworkManager, CMLUseCaseConfig;

@interface CMLDynamicUseCase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *group;
@property (readonly, copy, nonatomic) NSString *useCase;
@property (readonly, copy, nonatomic) CMLUseCaseConfig *config;
@property (readonly, copy, nonatomic) CMLNetworkManager *networkManager;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)registerWithCompletionHandler:(id /* block */)a0;
- (id)initWithGroup:(id)a0 useCase:(id)a1 config:(id)a2 networkManager:(id)a3;
- (BOOL)isEqualToDynamicUseCase:(id)a0;

@end
