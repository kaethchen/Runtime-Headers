@class NSString;

@interface NTNewsTodayResultsFetchDescriptor : NSObject <NTTodayResultsFetchDescriptor>

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) Class descriptorsOperationClass;
@property (readonly, nonatomic) Class fetchOperationClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)placeholderSectionDescriptorsWithContentRequest:(id)a0;

@end
