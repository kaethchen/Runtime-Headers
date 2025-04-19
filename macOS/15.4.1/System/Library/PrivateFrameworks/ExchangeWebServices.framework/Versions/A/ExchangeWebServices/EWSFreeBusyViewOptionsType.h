@class EWSDuration, NSString;

@interface EWSFreeBusyViewOptionsType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSDuration *TimeWindow;
@property (nonatomic) long long MergedFreeBusyIntervalInMinutes;
@property (nonatomic) long long RequestedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
