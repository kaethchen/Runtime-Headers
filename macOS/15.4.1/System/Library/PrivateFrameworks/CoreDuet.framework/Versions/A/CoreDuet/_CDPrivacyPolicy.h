@interface _CDPrivacyPolicy : NSObject

@property (readonly, nonatomic) BOOL canPersistOnStorage;
@property (readonly, nonatomic) double temporalPrecision;

+ (id)sharedPrivacyPolicy;

- (id)description;
- (id)init;
- (id)initWithTemporalPrecision:(double)a0 canPersistOnStorage:(BOOL)a1;

@end
