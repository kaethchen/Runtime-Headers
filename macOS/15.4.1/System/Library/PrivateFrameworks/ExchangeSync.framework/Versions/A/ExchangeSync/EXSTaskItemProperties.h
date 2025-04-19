@class NSDateComponents, NSDate;

@interface EXSTaskItemProperties : EXSItemProperties

@property (nonatomic) BOOL completed;
@property (readonly, nonatomic) BOOL completedSpecified;
@property (retain, nonatomic) NSDate *completeDate;
@property (readonly, nonatomic) BOOL completeDateSpecified;
@property (retain, nonatomic) NSDateComponents *dueDate;
@property (readonly, nonatomic) BOOL dueDateSpecified;
@property (nonatomic) long long order;
@property (readonly, nonatomic) BOOL orderSpecified;
@property (retain, nonatomic) NSDateComponents *startDate;
@property (readonly, nonatomic) BOOL startDateSpecified;

+ (id)itemPropertiesFromData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)buildPropertiesDictionary;
- (id)dataFromProperties;
- (void)populateFromPropertiesDictionary:(id)a0;

@end
