@class NSString, VMUClassPatternMatcher, VMUDebugTimer;

@interface VMUHeapAndVMAggregatorOptions : NSObject

@property (nonatomic) int scope;
@property (nonatomic) BOOL separateByZone;
@property (nonatomic) BOOL showZoneSummaries;
@property (nonatomic) BOOL showZoneHistograms;
@property (nonatomic) BOOL guessNonObjects;
@property (nonatomic) BOOL sumObjectFields;
@property (nonatomic) BOOL showSizes;
@property (nonatomic) BOOL showRawClassNames;
@property (retain, nonatomic) VMUClassPatternMatcher *classesPatternMatcher;
@property (retain, nonatomic) VMUClassPatternMatcher *classFilterPatternMatcher;
@property (retain, nonatomic) NSString *classesPattern;
@property (retain, nonatomic) VMUDebugTimer *debugTimer;

- (id)init;
- (void).cxx_destruct;

@end
