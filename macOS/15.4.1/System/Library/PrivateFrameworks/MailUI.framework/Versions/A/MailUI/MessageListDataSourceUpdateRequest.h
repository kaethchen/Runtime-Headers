@class NSArray, NSString;

@interface MessageListDataSourceUpdateRequest : NSObject <EFPubliclyDescribable>

@property (readonly, nonatomic) NSArray *sectionsToUpdate;
@property (readonly, nonatomic) NSArray *sectionsToRemove;
@property (readonly, nonatomic) BOOL startsWithEmptySnapshot;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSectionUpdates:(id)a0 sectionsToRemove:(id)a1 startsWithEmptySnapshot:(BOOL)a2;

@end
