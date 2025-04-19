@class NSString, NSArray;

@interface DSRMessageTracerUtilities : NSObject

@property (retain, nonatomic) NSString *languages;
@property (retain, nonatomic) NSString *microphoneIdentifier;
@property (nonatomic) float microphoneGain;
@property (retain, nonatomic) NSString *hotKeyDescription;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *startingAffordance;
@property (retain, nonatomic) NSString *stoppingAffordance;
@property (nonatomic) long long insertionPointLength;
@property (nonatomic) BOOL touchBarActivation;
@property (nonatomic) BOOL touchBarDeactivation;
@property (nonatomic) BOOL recordingTimedOut;
@property (nonatomic) BOOL usingOffline;
@property (nonatomic) unsigned short fan0InitialActualSpeed;
@property (nonatomic) unsigned short fan0FinalActualSpeed;
@property (nonatomic) double recordingTimeInterval;
@property (nonatomic) double timeIntervalSinceLastDictation;
@property (nonatomic) long long numberOfAlternativesChosen;
@property (retain, nonatomic) NSArray *inputMethodLanguageIdentifiers;
@property (nonatomic) long long numberOfAlternativesProvided;
@property (nonatomic) long long numberOfAlternativeWords;
@property (retain, nonatomic) NSString *additonalLogsPath;
@property (readonly, retain, nonatomic) id turnIdentifier;
@property (retain, nonatomic) NSString *dictationModelVersion;
@property (nonatomic) BOOL dictationModelClient;

+ (id)sharedDSRMessageTracerUtilities;

- (void)dealloc;
- (id)description;
- (void)logDictationStarted;
- (void)logCommandWithIdentifier:(id)a0;
- (void)logDictationCommandRecognizedWithIdentifier:(id)a0 customProperties:(id)a1;
- (void)logDictationDidLaunch;
- (void)logDictationFinished:(long long)a0 serverError:(id)a1;
- (void)logDictationInputModeSwitchEnded;
- (void)logDictationInputModeSwitchStarted;
- (void)prepareInstrumentationForNewDictationSession;

@end
