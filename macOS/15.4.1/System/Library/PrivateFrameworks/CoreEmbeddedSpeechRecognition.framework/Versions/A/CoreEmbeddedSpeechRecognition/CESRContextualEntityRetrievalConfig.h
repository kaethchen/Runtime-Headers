@class NSArray, NSDictionary;

@interface CESRContextualEntityRetrievalConfig : NSObject

@property (readonly, nonatomic) unsigned long long maxNumEnrolled;
@property (readonly, nonatomic) double retrievalTimeout;
@property (readonly, nonatomic) unsigned long long maxEntityChars;
@property (readonly, nonatomic) unsigned long long maxEntityWords;
@property (readonly, nonatomic) NSArray *rejectedContextTypes;
@property (readonly, nonatomic) NSDictionary *rejectedBundleTypes;
@property (readonly, nonatomic) NSArray *enabledTasks;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMaxNumEnrolled:(unsigned long long)a0 retrievalTimeout:(double)a1 maxEntityChars:(unsigned long long)a2 maxEntityWords:(unsigned long long)a3 rejectedContextTypes:(id)a4 rejectedBundleTypes:(id)a5 enabledTasks:(id)a6;

@end
