@class NSArray, NSDictionary, NSSortDescriptor;

@interface CSKTableColumnLayout : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *layoutColumnIdentifiers;
@property (nonatomic) BOOL layoutColumnsCanBeReordered;
@property (retain, nonatomic) NSDictionary *layoutColumnInitialWidths;
@property (retain, nonatomic) NSSortDescriptor *layoutDefaultSortDescriptor;

+ (id)updatedTableColumnIdentifiersFromLayout:(id)a0 tableColumnIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eligibleLayoutColumnIdentifiers;
- (void)fillTableColumnsMenu:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)layoutColumnCanBeResizedWithIdentifier:(id)a0;
- (double)layoutColumnInitialWidthWithIdentifier:(id)a0;
- (id)layoutColumnLocalizedTitleForIdentifier:(id)a0;
- (double)layoutColumnMaxWidthWithIdentifier:(id)a0;
- (double)layoutColumnMinWidthWithIdentifier:(id)a0;
- (id)layoutColumnSortDescriptorForColumnWithIdentifier:(id)a0;

@end
