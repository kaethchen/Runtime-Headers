@class NSNumber;

@interface BKSystemProtectedConfiguration : NSObject

@property (retain, nonatomic) NSNumber *biometryEnabled;
@property (retain, nonatomic) NSNumber *unlockEnabled;
@property (retain, nonatomic) NSNumber *identificationEnabled;
@property (retain, nonatomic) NSNumber *loginEnabled;
@property (retain, nonatomic) NSNumber *unlockTokenMaxLifetime;
@property (retain, nonatomic) NSNumber *bioMatchLifespan;
@property (retain, nonatomic) NSNumber *passcodeInputLifespan;
@property (retain, nonatomic) NSNumber *periocularFaceIDMatchEnabled;

- (id)description;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;

@end
