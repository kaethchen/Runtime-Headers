@class NSString;

@interface EWSBasePagingType : NSObject <XSDefinitionProvider>

@property (nonatomic) long long MaxEntriesReturned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;


@end
