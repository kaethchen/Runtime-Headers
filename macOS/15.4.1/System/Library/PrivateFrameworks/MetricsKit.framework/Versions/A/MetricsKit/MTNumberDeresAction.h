@class NSArray;

@interface MTNumberDeresAction : MTTreatmentAction

@property double precision;
@property (retain) NSArray *buckets;

- (void).cxx_destruct;
- (id)performAction:(id)a0 context:(id)a1;
- (id)initWithField:(id)a0 configDictionary:(id)a1;

@end
