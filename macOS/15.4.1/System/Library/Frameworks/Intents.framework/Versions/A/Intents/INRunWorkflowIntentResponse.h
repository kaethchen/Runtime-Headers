@class NSString, NSArray, NSNumber, INArchivedObject;

@interface INRunWorkflowIntentResponse : INIntentResponse <INRunWorkflowIntentResponseExport>

@property (readonly) long long code;
@property (copy) INArchivedObject *underlyingIntent;
@property (copy) INArchivedObject *underlyingIntentResponse;
@property (copy) NSString *utterance;
@property (copy) NSNumber *waitingForResume;
@property (copy) NSNumber *continueRunning;
@property (copy) NSArray *steps;
@property (copy) NSNumber *requestsIntentExecution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_appLaunchRequestedFromCode:(long long)a0;
+ (long long)_codeFromType:(int)a0 errorCode:(int)a1 appLaunchRequested:(BOOL)a2;
+ (int)_errorCodeFromCode:(long long)a0;
+ (int)_typeFromCode:(long long)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)propertiesByName;
- (id)_dictionaryRepresentation;
- (long long)_codeWithName:(id)a0;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (long long)_intentResponseCode;
- (BOOL)_shouldForwardIntentToApp;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (void)setPropertiesByName:(id)a0;

@end
