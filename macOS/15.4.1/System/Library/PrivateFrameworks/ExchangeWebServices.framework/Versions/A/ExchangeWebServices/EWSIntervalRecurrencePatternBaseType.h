@class NSString;

@interface EWSIntervalRecurrencePatternBaseType : EWSRecurrencePatternBaseType <XSDefinitionProvider>

@property (nonatomic) long long Interval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;


@end
