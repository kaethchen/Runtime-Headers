@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SSRVoiceProfileComposer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *speechId;

+ (id)sharedTrainer;

- (id)init;
- (void).cxx_destruct;
- (id)donateAndLogEnrollmentUtterance:(id)a0 locale:(id)a1 utteranceId:(unsigned long long)a2 mhUUID:(id)a3 phId:(unsigned long long)a4;
- (id)_getUUIDwithUtterance:(id)a0 locale:(id)a1;
- (BOOL)addUtterance:(id)a0 toProfile:(id)a1;
- (BOOL)addUtterance:(id)a0 toProfile:(id)a1 withAsset:(id)a2;
- (BOOL)addUtterance:(id)a0 toProfile:(id)a1 withAsset:(id)a2 withDonationInfo:(id)a3;

@end
