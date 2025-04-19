@class NSArray, NSString, EWSBaseItemIdType;

@interface EWSItemChangeType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSBaseItemIdType *ItemId;
@property (copy, nonatomic) NSArray *Updates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
