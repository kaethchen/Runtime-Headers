@class NSString, NSArray, NSDictionary;

@interface MTTreatmentAction : NSObject

@property (retain) NSString *field;
@property (retain) NSString *sourceField;
@property (retain) id overrideFieldValue;
@property BOOL denylisted;
@property (retain) NSArray *denylistedFields;
@property (retain) NSArray *allowlistedFields;
@property (retain) NSDictionary *fieldsMap;
@property (retain) NSArray *dstKeyPath;
@property (retain) NSArray *srcKeyPath;

+ (id)treatmentActionWithField:(id)a0 configData:(id)a1;

- (void).cxx_destruct;
- (void)performActionWithContext:(id)a0;
- (id)performAction:(id)a0 context:(id)a1;
- (void)computeKeyPaths;
- (id)initWithField:(id)a0 configDictionary:(id)a1;
- (id)performAction:(id)a0 atKeyIndex:(long long)a1 context:(id)a2;

@end
