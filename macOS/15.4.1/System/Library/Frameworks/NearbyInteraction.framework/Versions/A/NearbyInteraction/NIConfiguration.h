@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL supportsCameraAssistance;
@property unsigned long long suspensionPolicy;
@property unsigned long long enabledGestures;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)initInternal;
- (id)descriptionInternal;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (BOOL)_internalIsCameraAssistanceInClientProcess;
- (BOOL)_internalIsExtendedDistanceMeasurementEnabled;
- (BOOL)_internalIsMemoryAssertionRequired;
- (BOOL)_internalIsPowerAssertionRequired;

@end
