@class NSString, NSArray, PAConfiguration;

@interface PAEnrollmentNode : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long totalSteps;
@property (nonatomic) unsigned long long section;
@property (nonatomic) unsigned long long type;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL hideVisualizer;
@property (retain, nonatomic) NSArray *options;
@property (retain, nonatomic) NSArray *stimuli;
@property (retain, nonatomic) NSString *heading;
@property (retain, nonatomic) NSString *instructions;
@property (retain, nonatomic) PAConfiguration *configuration;
@property (retain, nonatomic) NSString *tuningDescription;

+ (id)nodeWithSection:(unsigned long long)a0 andType:(unsigned long long)a1 comparing:(unsigned long long)a2 with:(unsigned long long)a3;
+ (id)nodeWithSection:(unsigned long long)a0 type:(unsigned long long)a1 andConfiguration:(id)a2;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)key;
- (id)progressDescription;

@end
