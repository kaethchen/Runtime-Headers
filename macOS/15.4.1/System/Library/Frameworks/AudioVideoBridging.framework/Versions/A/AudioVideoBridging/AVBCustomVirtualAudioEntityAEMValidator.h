@class NSArray, AVB17221AEMEntity;

@interface AVBCustomVirtualAudioEntityAEMValidator : NSObject

@property (retain) AVB17221AEMEntity *aemEntity;
@property (retain) NSArray *validationErrors;
@property (retain) NSArray *validationWarnings;
@property (readonly) BOOL succeeded;

+ (id)validateCustomVirtualAudioEntityWithModel:(id)a0;
+ (id)validateCustomVirtualAudioEntityWithModelFromPlist:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)runValidation;
- (id)initWithCustomVirtualAudioEntityModel:(id)a0;
- (id)localeIndicesMissingLocalizedString:(id)a0 inConfig:(id)a1;
- (id)localesMissingLocalizedString:(id)a0 inConfig:(id)a1;
- (unsigned int)numChannelsInStreamFormat:(id)a0;
- (BOOL)validateCustomVirtualAudioEntityAEMAudioUnit:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (BOOL)validateCustomVirtualAudioEntityAEMClockDomain:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (BOOL)validateCustomVirtualAudioEntityAEMClockSource:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (BOOL)validateCustomVirtualAudioEntityAEMConfig:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (BOOL)validateCustomVirtualAudioEntityAEMEntity:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (BOOL)validateCustomVirtualAudioEntityAEMMemoryObject:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (BOOL)validateCustomVirtualAudioEntityAEMStream:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (BOOL)validateCustomVirtualAudioEntityAEMStreamPort:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (BOOL)validateCustomVirtualAudioEntityHasOneSourcePerSinkInConfig:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (BOOL)validateLocalizedStringRef:(id)a0 withFieldName:(id)a1 forObject:(id)a2 inConfiguration:(id)a3 loggingErrorsTo:(id)a4 loggingWarningsTo:(id)a5;
- (BOOL)validateObjectName:(id)a0 andLocalizedDescription:(id)a1 forObject:(id)a2 inConfiguration:(id)a3 loggingErrorsTo:(id)a4 loggingWarningsTo:(id)a5;

@end
