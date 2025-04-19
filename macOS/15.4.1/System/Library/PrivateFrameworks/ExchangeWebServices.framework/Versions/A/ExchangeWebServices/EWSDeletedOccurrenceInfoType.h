@class NSString, NSDateComponents;

@interface EWSDeletedOccurrenceInfoType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) NSDateComponents *Start;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
