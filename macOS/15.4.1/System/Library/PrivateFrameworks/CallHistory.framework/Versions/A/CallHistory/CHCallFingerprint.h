@interface CHCallFingerprint : NSObject

+ (BOOL)doCallTypesMatch:(id)a0 :(id)a1;
+ (BOOL)doHandlesMatch:(id)a0 with:(id)a1;
+ (BOOL)doesCall:(id)a0 matchWith:(id)a1;
+ (id)matchCallWithFingerprint:(id)a0 usingDatabase:(id)a1;
+ (id)predicateForCall:(id)a0;
+ (id)predicateForHandoffCall:(id)a0;
+ (BOOL)shouldCall:(id)a0 updateMatchingCall:(id)a1;
+ (id)updateCall:(id)a0 withFingerprintedCall:(id)a1;

@end
