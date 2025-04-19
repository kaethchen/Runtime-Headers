@class NSString, EWSRecurrenceRangeBaseType, EWSTaskRecurrencePatternBaseType;

@interface EWSTaskRecurrenceType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSTaskRecurrencePatternBaseType *RecurrencePattern;
@property (retain, nonatomic) EWSRecurrenceRangeBaseType *RecurrenceRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
