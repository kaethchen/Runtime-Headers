@class NSString;

@interface MUIMessageListSupplementaryViewModel : NSObject <EFPubliclyDescribable>

@property (nonatomic) BOOL shouldDisplaySupplementaryView;
@property (retain, nonatomic) NSString *supplementaryKind;
@property (nonatomic) long long sectionIndex;
@property (nonatomic) long long displayReason;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_publicDescriptionOfDisplayReason:(long long)a0;
+ (id)supplementaryViewModelWithDisplay:(BOOL)a0 kind:(id)a1 sectionIndex:(long long)a2 reason:(long long)a3;

- (void).cxx_destruct;
- (id)initShouldDisplaySupplementaryView:(BOOL)a0 ofKind:(id)a1 atSectionWithIndex:(long long)a2 withDisplayReason:(long long)a3;

@end
