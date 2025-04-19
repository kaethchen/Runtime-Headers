@class NSString, NSArray, AISSymptomReport;

@interface AISRepairReport : NSObject

@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, copy, nonatomic) NSString *userProfileIdentifier;
@property (readonly, nonatomic) NSArray *repairedSymptoms;
@property (readonly, nonatomic) AISSymptomReport *symptomReport;

- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0 repairedSymptoms:(id)a1 symptomReport:(id)a2;
- (id)initWithAltDSID:(id)a0 userProfileIdentifier:(id)a1 repairedSymptoms:(id)a2 symptomReport:(id)a3;

@end
