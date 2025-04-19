@class NSArray, NSString;

@interface EWSCalendarPermissionSetType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSArray *CalendarPermissions;
@property (copy, nonatomic) NSArray *UnknownEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
