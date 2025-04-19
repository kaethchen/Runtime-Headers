@class NSString, PKPrintSettings, NSData, NSDate, NSArray;

@interface PKMutableJobState : NSObject <PKPropertyVisitable, PKJobUpdatableState>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long localJobID;
@property (copy) NSData *printerEndpointData;
@property (copy) NSString *printerDisplayName;
@property (copy) NSString *printerLocation;
@property long long printerKind;
@property (copy) PKPrintSettings *settings;
@property (copy) NSDate *timeAtCreation;
@property long long state;
@property long long mediaSheetsCompleted;
@property (copy) NSDate *timeAtProcessing;
@property (copy) NSDate *timeAtCompleted;
@property long long mediaSheets;
@property long long mediaProgress;
@property long long remoteJobId;
@property (copy) NSString *PIN;
@property (copy) NSString *jobPrinterStateMessage;
@property (copy) NSArray *jobPrinterStateReasons;
@property (copy) NSString *jobStateMessage;
@property (copy) NSArray *jobStateReasons;
@property (copy) NSData *thumbnailImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUserCodableDictionary:(id)a0;
- (id)userCodableDictionary;
- (void)visitProperties:(struct Visitor { void /* function */ **x0; } *)a0;

@end
