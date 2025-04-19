@class NSArray, SLVirtualDisplayMode;

@interface SLVirtualDisplaySettings : NSObject

@property (readonly, nonatomic) SLVirtualDisplayMode *nativeMode;
@property (readonly, nonatomic) SLVirtualDisplayMode *preferredMode;
@property (readonly, nonatomic) NSArray *optionalModes;
@property (readonly, nonatomic) unsigned long long rotations;

+ (id)settingsWithBackendSettings:(id)a0;
+ (id)settingsWithDictionaryRepresentation:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)dictionaryRepresentation;
- (id)initWithNativeMode:(id)a0 preferredMode:(id)a1 optionalModes:(id)a2 rotations:(unsigned long long)a3 error:(id *)a4;

@end
