@class NSString;

@interface EWSConflictResultsType : NSObject <XSDefinitionProvider>

@property (nonatomic) unsigned long long Count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;


@end
