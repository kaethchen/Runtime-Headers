@class NSString, NSDateComponents;

@interface EWSDuration : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) NSDateComponents *StartTime;
@property (retain, nonatomic) NSDateComponents *EndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
