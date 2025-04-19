@class NSArray, NSString, PKMutableJobState, NSData, PKPrintSettings, NSDate, PKPrinter;

@interface PKJob : NSObject <PKJobUpdatableState> {
    int _localJobID;
    PKPrinter *_cachedPrinter;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long number;
@property (readonly) long long localJobID;
@property (readonly) NSString *localizedStatusString;
@property (readonly) NSString *localizedJobOptions;
@property (readonly, copy) PKPrinter *printer;
@property (readonly, copy) PKMutableJobState *updatableState;
@property (readonly, copy) NSData *printerEndpointData;
@property (readonly, copy) NSString *printerDisplayName;
@property (readonly, copy) NSString *printerLocation;
@property (readonly) long long printerKind;
@property (readonly, copy) PKPrintSettings *settings;
@property (readonly, copy) NSDate *timeAtCreation;
@property (readonly) long long state;
@property (readonly) long long mediaSheetsCompleted;
@property (readonly, copy) NSDate *timeAtProcessing;
@property (readonly, copy) NSDate *timeAtCompleted;
@property (readonly) long long mediaSheets;
@property (readonly) long long mediaProgress;
@property (readonly) long long remoteJobId;
@property (readonly, copy) NSString *PIN;
@property (readonly, copy) NSString *jobPrinterStateMessage;
@property (readonly, copy) NSArray *jobPrinterStateReasons;
@property (readonly, copy) NSString *jobStateMessage;
@property (readonly, copy) NSArray *jobStateReasons;
@property (readonly, copy) NSData *thumbnailImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jobs;
+ (id)currentJob;
+ (void)currentJobCompletionHandler:(id /* block */)a0;
+ (id)jobForJobID:(long long)a0;
+ (void)jobsCompletionHandler:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cancel;
- (long long)update;
- (void)_updateJobState:(id)a0;
- (void)_withPrinterAsync:(id /* block */)a0;
- (id)initWithJobID:(int)a0 updateState:(id)a1;
- (id)initWithUserCodableDictionary:(id)a0;
- (void)updateCompletionHandler:(id /* block */)a0;
- (id)userCodableDictionary;

@end
