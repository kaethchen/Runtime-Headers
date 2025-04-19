@interface DRSDampeningEnforcementSettings : NSObject

@property (nonatomic) BOOL enforcesResourceHysteresis;
@property (nonatomic) BOOL enforcesResourceCap;
@property (nonatomic) BOOL enforcesResourceDownsampling;
@property (nonatomic) BOOL enforcesSignatureHysteresis;
@property (nonatomic) BOOL enforcesSignatureCap;
@property (nonatomic) BOOL enforcesSignatureDownsampling;
@property (nonatomic) BOOL enforcesTotalCap;

- (id)debugDescription;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)_moRepresentation:(id)a0;
- (id)initWithMO:(id)a0;
- (id)jsonCompatibleDictRepresentation;
- (void)setAllEnforcement:(BOOL)a0;

@end
