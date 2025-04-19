@class NSArray;

@interface MTTreatmentProfile : NSObject

@property (retain) NSArray *treatments;

+ (id)treatmentProfileWithConfigData:(id)a0;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;
- (id)performTreatments:(id)a0;

@end
