@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DDScannerServiceConfiguration : NSObject <NSCopying, NSSecureCoding> {
    int _scannerType;
    BOOL _spotlightSuggestionsEnabled;
    BOOL _remoteScannerEnabled;
    NSString *_recyclingIdentifier;
    long long *_jobIdentifierPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL noObjC;
@property (nonatomic) BOOL languageHighConfidence;
@property int script;
@property (retain, nonatomic) NSArray *mockMLResults;
@property (retain, nonatomic) NSArray *supportedMLResults;
@property (retain) NSString *country;
@property (nonatomic) BOOL spotlightSuggestionsEnabled;
@property (nonatomic) BOOL remoteScannerEnabled;
@property (nonatomic) double timeout;
@property (nonatomic) long long resultsOptions;
@property (nonatomic) long long scannerOptions;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) int qos;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithScannerType:(int)a0 passiveIntent:(BOOL)a1;
- (id)initEmpty;
- (int)scannerType;

@end
