@class NSString;

@interface WFPhotoItemCollectionParameter : WFParameter

@property (readonly, nonatomic) NSString *pickerMode;
@property (readonly, nonatomic) long long selectionLimit;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;

@end
