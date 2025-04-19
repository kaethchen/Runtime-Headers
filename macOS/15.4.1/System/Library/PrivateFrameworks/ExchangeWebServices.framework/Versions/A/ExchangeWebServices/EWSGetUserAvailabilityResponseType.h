@class NSArray, NSString;

@interface EWSGetUserAvailabilityResponseType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSArray *FreeBusyResponseArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
