@class NSArray, NSString, NSDictionary;

@interface STMFilesConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *rowItems;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL showPathBar;
@property (nonatomic) BOOL showRevealButton;
@property (nonatomic) BOOL isActionEnabled;
@property (retain, nonatomic) NSArray *orderedCategoryIdentifiers;
@property (retain, nonatomic) NSDictionary *localizedCategoryNamesByCategoryIdentifier;
@property (retain, nonatomic) NSArray *hiddenColumns;
@property (copy, nonatomic) NSString *customRevealTitle;
@property (copy, nonatomic) NSString *customActionTitle;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
