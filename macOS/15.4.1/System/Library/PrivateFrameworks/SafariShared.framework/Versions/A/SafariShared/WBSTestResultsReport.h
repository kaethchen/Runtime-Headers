@class NSString, NSDictionary, NSData, NSNumber;

@interface WBSTestResultsReport : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) unsigned long long reportType;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *testIdentifier;
@property (readonly, nonatomic) NSString *testStage;
@property (readonly, nonatomic) NSNumber *errorCode;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) NSDictionary *performanceValues;
@property (readonly, nonatomic) NSData *resultsActual;
@property (readonly, nonatomic) NSData *resultsExpected;
@property (readonly, nonatomic) NSString *resultsExpectedName;
@property (readonly, nonatomic) NSString *resultsDescriptiveName;
@property (readonly, nonatomic) NSString *resultsUniformTypeIdentifier;

+ (id)reportForActualResults:(id)a0 expectedResults:(id)a1 expectedResultsName:(id)a2 descriptiveResultsName:(id)a3 uniformTypeIdentifier:(id)a4 forStage:(id)a5 forTest:(id)a6 inBundle:(id)a7;
+ (id)reportForError:(id)a0 descriptiveResultsName:(id)a1 forStage:(id)a2 forTest:(id)a3 inBundle:(id)a4;
+ (id)reportForPerformance:(id)a0 forStage:(id)a1 forTest:(id)a2 inBundle:(id)a3;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
