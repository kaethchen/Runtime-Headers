@class NSString, NSArray, EWSWorkingHours;

@interface EWSFreeBusyView : NSObject <XSDefinitionProvider>

@property (nonatomic) long long FreeBusyViewType;
@property (copy, nonatomic) NSString *MergedFreeBusy;
@property (copy, nonatomic) NSArray *CalendarEventArray;
@property (retain, nonatomic) EWSWorkingHours *WorkingHours;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
