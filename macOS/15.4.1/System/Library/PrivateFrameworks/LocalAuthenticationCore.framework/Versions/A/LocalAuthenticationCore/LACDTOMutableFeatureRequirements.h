@class NSString;

@interface LACDTOMutableFeatureRequirements : NSObject <LACDTOFeatureRequirements>

@property (nonatomic) BOOL hasPasscodeSet;
@property (nonatomic) BOOL hasBiometricEnrollments;
@property (nonatomic) BOOL hasLocationServicesEnabled;
@property (nonatomic) BOOL hasHSA2Account;
@property (readonly, nonatomic) BOOL hasSEPRequirements;
@property (readonly, nonatomic) BOOL hasAPRequirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nullInstance;

- (BOOL)isEqual:(id)a0;
- (id)initWithRequirements:(id)a0;

@end
