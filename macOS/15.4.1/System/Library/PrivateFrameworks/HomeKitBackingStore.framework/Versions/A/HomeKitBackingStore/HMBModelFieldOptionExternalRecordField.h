@class NSString;

@interface HMBModelFieldOptionExternalRecordField : HMBModelFieldOption

@property (readonly, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) BOOL encrypted;

- (void).cxx_destruct;
- (void)applyTo:(id)a0;
- (id)initWithExternalRecordField:(id)a0 encrypted:(BOOL)a1;

@end
