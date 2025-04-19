@interface MLInternalSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL restrictNeuralNetworksToUseCPUOnly;
@property BOOL restrictNeuralNetworksFromUsingANE;
@property (readonly, nonatomic) BOOL isNeuralNetworkGPUPathForbidden;

+ (BOOL)deviceHasANE;
+ (id)globalSettings;
+ (id)globalSettingsFromSettings:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
