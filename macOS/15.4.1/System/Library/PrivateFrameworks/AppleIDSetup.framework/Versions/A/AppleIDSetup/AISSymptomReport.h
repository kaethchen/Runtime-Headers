@class NSString, NSArray;

@interface AISSymptomReport : NSObject

@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSArray *symptoms;
@property (readonly, nonatomic) unsigned long long combinedProblemFlags;

- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0 symptoms:(id)a1 combinedProblemFlags:(unsigned long long)a2;

@end
