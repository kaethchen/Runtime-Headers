@class NSSet, NSString, SFResultSection;

@interface SSQueryIntentHelper : NSObject

@property (nonatomic) int intentPrefixLength;
@property (nonatomic) int intentPostRetrieval;
@property (nonatomic) int intentNextSection;
@property (nonatomic) int intentQU;
@property (nonatomic) int intentType;
@property (retain, nonatomic) SFResultSection *nextSectionForIntent;
@property (retain, nonatomic) NSSet *retrievedBundleIDs;
@property (retain, nonatomic) NSString *topHitResultBundleId;
@property (nonatomic) BOOL resultSetHasTopHits;
@property (nonatomic) BOOL resultSetHasSuggestions;
@property (nonatomic) BOOL resultSetHasAppSectionWithinTop3;
@property (retain, nonatomic) NSString *serverTopBundleId;
@property (nonatomic) BOOL serverHasTopHit;
@property (nonatomic) long long resultSetSectionCount;
@property (nonatomic) int intentStrength;
@property (retain, nonatomic) NSString *quIntentLabel;

- (id)description;
- (void).cxx_destruct;

@end
