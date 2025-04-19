@class NSObject;
@protocol OS_dispatch_queue;

@interface SSRSamplingManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)getDonationDataWithEnrollmentId:(id)a0 error:(id *)a1;
- (id)getDonationIdsWithEnrollmentId:(id)a0 error:(id *)a1;
- (id)getEnrollmentDateWithLocale:(id)a0 error:(id *)a1;
- (id)getEnrollmentIdWithLocale:(id)a0 error:(id *)a1;
- (unsigned long long)getEnrollmentSelectionStatusWithLocale:(id)a0 error:(id *)a1;

@end
